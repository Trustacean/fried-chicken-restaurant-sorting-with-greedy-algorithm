#ifndef GREEDY_H
#define GREEDY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Greedy;
}
QT_END_NAMESPACE

class Greedy : public QMainWindow
{
    Q_OBJECT

public:
    Greedy(QWidget *parent = nullptr);
    ~Greedy();

private slots:
    void on_SolveButton_clicked();

private:
    Ui::Greedy *ui;
};
#endif // GREEDY_H
