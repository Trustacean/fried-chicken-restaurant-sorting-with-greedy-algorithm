/********************************************************************************
** Form generated from reading UI file 'greedy.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GREEDY_H
#define UI_GREEDY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Greedy
{
public:
    QWidget *centralwidget;
    QLabel *Title;
    QTableWidget *MainTable;
    QLabel *MinItemLabel;
    QPushButton *SolveButton;
    QLabel *BudgetLabel;
    QLabel *Subtitle;
    QTableWidget *ResultTable;
    QLabel *TotalPrice;
    QLabel *TotalPriceLabel;
    QLabel *TotalDistance;
    QLabel *TotalDistanceLabel;
    QLineEdit *BudgetField;
    QLineEdit *MinItemField;
    QLabel *Time;
    QLabel *RunTime;
    QLabel *label;

    void setupUi(QMainWindow *Greedy)
    {
        if (Greedy->objectName().isEmpty())
            Greedy->setObjectName("Greedy");
        Greedy->resize(1200, 950);
        Greedy->setMaximumSize(QSize(1200, 950));
        centralwidget = new QWidget(Greedy);
        centralwidget->setObjectName("centralwidget");
        Title = new QLabel(centralwidget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(50, 30, 600, 30));
        QFont font;
        font.setPointSize(12);
        Title->setFont(font);
        Title->setAlignment(Qt::AlignCenter);
        MainTable = new QTableWidget(centralwidget);
        if (MainTable->columnCount() < 4)
            MainTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        MainTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        MainTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        MainTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        MainTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        MainTable->setObjectName("MainTable");
        MainTable->setEnabled(true);
        MainTable->setGeometry(QRect(50, 80, 600, 800));
        MainTable->setMouseTracking(true);
        MainTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        MainTable->horizontalHeader()->setMinimumSectionSize(42);
        MainTable->horizontalHeader()->setDefaultSectionSize(142);
        MainTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        MinItemLabel = new QLabel(centralwidget);
        MinItemLabel->setObjectName("MinItemLabel");
        MinItemLabel->setGeometry(QRect(710, 140, 120, 20));
        SolveButton = new QPushButton(centralwidget);
        SolveButton->setObjectName("SolveButton");
        SolveButton->setGeometry(QRect(710, 220, 200, 29));
        BudgetLabel = new QLabel(centralwidget);
        BudgetLabel->setObjectName("BudgetLabel");
        BudgetLabel->setGeometry(QRect(710, 180, 120, 20));
        Subtitle = new QLabel(centralwidget);
        Subtitle->setObjectName("Subtitle");
        Subtitle->setGeometry(QRect(710, 80, 400, 30));
        Subtitle->setFont(font);
        Subtitle->setAlignment(Qt::AlignCenter);
        ResultTable = new QTableWidget(centralwidget);
        if (ResultTable->columnCount() < 3)
            ResultTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ResultTable->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ResultTable->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ResultTable->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        ResultTable->setObjectName("ResultTable");
        ResultTable->setEnabled(true);
        ResultTable->setGeometry(QRect(710, 280, 430, 240));
        ResultTable->setMouseTracking(true);
        ResultTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ResultTable->horizontalHeader()->setMinimumSectionSize(42);
        ResultTable->horizontalHeader()->setDefaultSectionSize(142);
        ResultTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        TotalPrice = new QLabel(centralwidget);
        TotalPrice->setObjectName("TotalPrice");
        TotalPrice->setGeometry(QRect(840, 550, 120, 20));
        TotalPriceLabel = new QLabel(centralwidget);
        TotalPriceLabel->setObjectName("TotalPriceLabel");
        TotalPriceLabel->setGeometry(QRect(710, 550, 120, 20));
        TotalDistance = new QLabel(centralwidget);
        TotalDistance->setObjectName("TotalDistance");
        TotalDistance->setGeometry(QRect(840, 580, 120, 20));
        TotalDistanceLabel = new QLabel(centralwidget);
        TotalDistanceLabel->setObjectName("TotalDistanceLabel");
        TotalDistanceLabel->setGeometry(QRect(710, 580, 100, 20));
        BudgetField = new QLineEdit(centralwidget);
        BudgetField->setObjectName("BudgetField");
        BudgetField->setGeometry(QRect(830, 180, 80, 20));
        MinItemField = new QLineEdit(centralwidget);
        MinItemField->setObjectName("MinItemField");
        MinItemField->setGeometry(QRect(830, 140, 80, 20));
        Time = new QLabel(centralwidget);
        Time->setObjectName("Time");
        Time->setGeometry(QRect(860, 640, 100, 20));
        RunTime = new QLabel(centralwidget);
        RunTime->setObjectName("RunTime");
        RunTime->setGeometry(QRect(710, 640, 140, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(710, 690, 431, 171));
        label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Trustacean/Downloads/maxresdefault-1875011387.jpg")));
        label->setScaledContents(true);
        Greedy->setCentralWidget(centralwidget);

        retranslateUi(Greedy);

        QMetaObject::connectSlotsByName(Greedy);
    } // setupUi

    void retranslateUi(QMainWindow *Greedy)
    {
        Greedy->setWindowTitle(QCoreApplication::translate("Greedy", "Greedy", nullptr));
        Title->setText(QCoreApplication::translate("Greedy", "Daftar Harga Nasi Ayam Di Radius 500m", nullptr));
        QTableWidgetItem *___qtablewidgetitem = MainTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Greedy", "Nama", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = MainTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Greedy", "Harga (Rp)", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = MainTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Greedy", "Jarak (m)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = MainTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Greedy", "Harga * Jarak", nullptr));
        MinItemLabel->setText(QCoreApplication::translate("Greedy", "Minimal Makan", nullptr));
        SolveButton->setText(QCoreApplication::translate("Greedy", "Cari Dengan Greedy", nullptr));
        BudgetLabel->setText(QCoreApplication::translate("Greedy", "Budget", nullptr));
        Subtitle->setText(QCoreApplication::translate("Greedy", "Solusi Dengan Algoritma Greedy", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ResultTable->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Greedy", "Nama", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ResultTable->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Greedy", "Harga (Rp)", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = ResultTable->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Greedy", "Jarak (m)", nullptr));
        TotalPrice->setText(QCoreApplication::translate("Greedy", "0", nullptr));
        TotalPriceLabel->setText(QCoreApplication::translate("Greedy", "Total Harga (Rp)", nullptr));
        TotalDistance->setText(QCoreApplication::translate("Greedy", "0", nullptr));
        TotalDistanceLabel->setText(QCoreApplication::translate("Greedy", "Total Jarak (m)", nullptr));
        Time->setText(QString());
        RunTime->setText(QCoreApplication::translate("Greedy", "Running Time (ms)", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Greedy: public Ui_Greedy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GREEDY_H
