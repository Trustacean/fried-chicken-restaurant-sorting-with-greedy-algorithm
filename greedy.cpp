#include "greedy.h"
#include "ui_greedy.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include "Quicksort.h"
#include "Item.h"
#include <time.h>

std::vector<Item> items;

void solution(int min_item, int budget, Ui::Greedy &ui)
{
    //measure time in ms
    clock_t start = clock();

    int total_price = 0;
    int total_distance = 0;
    std::vector<Item> result;

    // Find the minimum number of items that can be bought with the budget
    for (int i = 0; i < items.size(); i++)
    {
        if (total_price + items[i].price <= budget) {
            total_price += items[i].price;
            total_distance += items[i].distance;
            result.push_back(items[i]);
        }
    }
    ui.TotalPrice->setText(QString::number(total_price));
    ui.TotalDistance->setText(QString::number(total_distance));

    ui.ResultTable->setRowCount(result.size());
    for (int i = 0; i < result.size() ; i++)
    {
        ui.ResultTable->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(result[i].name)));
        ui.ResultTable->setItem(i, 1, new QTableWidgetItem(QString::number(result[i].price)));
        ui.ResultTable->setItem(i, 2, new QTableWidgetItem(QString::number(result[i].distance)));
    }

    //measure time in ms
    double time = double ((clock() - start) / double(CLOCKS_PER_SEC));
    std::cout << "Time: " << time << std::endl;
    ui.Time->setText(QString::number(time));
}

void read_csv(const std::string &filename, Ui::Greedy &ui)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Error: file not found" << std::endl;
        return;
    }
    std::cout << "File opened successfully" << std::endl;
    std::string line;
    int count = 0;
    while (std::getline(file, line))
    {
        std::stringstream ss(line);
        std::string name;
        std::string tempPrice;
        std::string tempDistance;
        std::getline(ss, name, ';');
        std::getline(ss, tempPrice, ';');
        std::getline(ss, tempDistance, ';');
        int price = std::stoi(tempPrice);
        int distance = std::stoi(tempDistance);
        items.emplace_back(Item{count, name, price, distance, price * distance});
        count++;
    }
    ui.MainTable->setRowCount(items.size());

    quick_sort(items, 0, items.size() - 1);

    for (int i = 0; i < items.size(); i++)
    {
        ui.MainTable->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(items[i].name)));
        ui.MainTable->setItem(i, 1, new QTableWidgetItem(QString::number(items[i].price)));
        ui.MainTable->setItem(i, 2, new QTableWidgetItem(QString::number(items[i].distance)));
        ui.MainTable->setItem(i, 3, new QTableWidgetItem(QString::number(items[i].price_distance)));
    }

}

void Greedy::on_SolveButton_clicked()
{
    int budget = ui->BudgetField->text().toInt();
    int min_item = ui->MinItemField->text().toInt();
    solution(min_item, budget, *ui);
}

Greedy::Greedy(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Greedy)
{
    ui->setupUi(this);
    read_csv("./Sample.csv", *ui);
}

Greedy::~Greedy()
{
    delete ui;
}
