/********************************************************************************
** Form generated from reading UI file 'mainwindowPvVnxO.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWPVVNXO_H
#define MAINWINDOWPVVNXO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Computer_Programing_Training
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *Button_BubbleSort_Algo;
    QPushButton *Button_SelectSort_Algo;
    QPushButton *Button_InsertSort_Algo;
    QPushButton *Button_QuickSort_Algo;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_4;
    QPushButton *Button_BubbleSort_Visual;
    QPushButton *Button_SelectSort_Visual;
    QPushButton *Button_InsertSort_Visual;
    QPushButton *Button_QuickSort_Visual;
    QVBoxLayout *verticalLayout_5;
    QPushButton *Button_Piano_Play;
    QPushButton *Button_Keyboard_Piano;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QPushButton *Button_Set;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Computer_Programing_Training)
    {
        if (Computer_Programing_Training->objectName().isEmpty())
            Computer_Programing_Training->setObjectName(QString::fromUtf8("Computer_Programing_Training"));
        Computer_Programing_Training->resize(669, 420);
        centralwidget = new QWidget(Computer_Programing_Training);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        centralwidget->setFont(font);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_5);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Button_BubbleSort_Algo = new QPushButton(centralwidget);
        Button_BubbleSort_Algo->setObjectName(QString::fromUtf8("Button_BubbleSort_Algo"));
        Button_BubbleSort_Algo->setFont(font);

        verticalLayout_3->addWidget(Button_BubbleSort_Algo);

        Button_SelectSort_Algo = new QPushButton(centralwidget);
        Button_SelectSort_Algo->setObjectName(QString::fromUtf8("Button_SelectSort_Algo"));
        Button_SelectSort_Algo->setFont(font);

        verticalLayout_3->addWidget(Button_SelectSort_Algo);

        Button_InsertSort_Algo = new QPushButton(centralwidget);
        Button_InsertSort_Algo->setObjectName(QString::fromUtf8("Button_InsertSort_Algo"));
        Button_InsertSort_Algo->setFont(font);

        verticalLayout_3->addWidget(Button_InsertSort_Algo);

        Button_QuickSort_Algo = new QPushButton(centralwidget);
        Button_QuickSort_Algo->setObjectName(QString::fromUtf8("Button_QuickSort_Algo"));
        Button_QuickSort_Algo->setFont(font);

        verticalLayout_3->addWidget(Button_QuickSort_Algo);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        Button_BubbleSort_Visual = new QPushButton(centralwidget);
        Button_BubbleSort_Visual->setObjectName(QString::fromUtf8("Button_BubbleSort_Visual"));
        Button_BubbleSort_Visual->setFont(font);

        verticalLayout_4->addWidget(Button_BubbleSort_Visual);

        Button_SelectSort_Visual = new QPushButton(centralwidget);
        Button_SelectSort_Visual->setObjectName(QString::fromUtf8("Button_SelectSort_Visual"));
        Button_SelectSort_Visual->setFont(font);

        verticalLayout_4->addWidget(Button_SelectSort_Visual);

        Button_InsertSort_Visual = new QPushButton(centralwidget);
        Button_InsertSort_Visual->setObjectName(QString::fromUtf8("Button_InsertSort_Visual"));
        Button_InsertSort_Visual->setFont(font);

        verticalLayout_4->addWidget(Button_InsertSort_Visual);

        Button_QuickSort_Visual = new QPushButton(centralwidget);
        Button_QuickSort_Visual->setObjectName(QString::fromUtf8("Button_QuickSort_Visual"));
        Button_QuickSort_Visual->setFont(font);

        verticalLayout_4->addWidget(Button_QuickSort_Visual);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        Button_Piano_Play = new QPushButton(centralwidget);
        Button_Piano_Play->setObjectName(QString::fromUtf8("Button_Piano_Play"));
        Button_Piano_Play->setFont(font);

        verticalLayout_5->addWidget(Button_Piano_Play);

        Button_Keyboard_Piano = new QPushButton(centralwidget);
        Button_Keyboard_Piano->setObjectName(QString::fromUtf8("Button_Keyboard_Piano"));
        Button_Keyboard_Piano->setFont(font);

        verticalLayout_5->addWidget(Button_Keyboard_Piano);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_6);

        Button_Set = new QPushButton(centralwidget);
        Button_Set->setObjectName(QString::fromUtf8("Button_Set"));
        Button_Set->setFont(font);

        horizontalLayout_3->addWidget(Button_Set);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        Computer_Programing_Training->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Computer_Programing_Training);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 669, 22));
        Computer_Programing_Training->setMenuBar(menubar);
        statusbar = new QStatusBar(Computer_Programing_Training);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Computer_Programing_Training->setStatusBar(statusbar);

        retranslateUi(Computer_Programing_Training);

        QMetaObject::connectSlotsByName(Computer_Programing_Training);
    } // setupUi

    void retranslateUi(QMainWindow *Computer_Programing_Training)
    {
        Computer_Programing_Training->setWindowTitle(QCoreApplication::translate("Computer_Programing_Training", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Computer_Programing_Training", "Computer Programming Training (A gourp of Cyberspace Security)", nullptr));
        label_2->setText(QCoreApplication::translate("Computer_Programing_Training", "C.Chen (20123069), Y.Ma (20123067), Z.Yang (20123068), Y.Lu (20123070), J.Song (20123071)", nullptr));
        label_5->setText(QCoreApplication::translate("Computer_Programing_Training", "Sorting Algorithm", nullptr));
        label_3->setText(QCoreApplication::translate("Computer_Programing_Training", "Sorting Visualization", nullptr));
        label_4->setText(QCoreApplication::translate("Computer_Programing_Training", "MIDI Program", nullptr));
        Button_BubbleSort_Algo->setText(QCoreApplication::translate("Computer_Programing_Training", "Bubble Sort", nullptr));
        Button_SelectSort_Algo->setText(QCoreApplication::translate("Computer_Programing_Training", "Select Sort", nullptr));
        Button_InsertSort_Algo->setText(QCoreApplication::translate("Computer_Programing_Training", "Insert Sort", nullptr));
        Button_QuickSort_Algo->setText(QCoreApplication::translate("Computer_Programing_Training", "Quicksort", nullptr));
        pushButton->setText(QCoreApplication::translate("Computer_Programing_Training", "Run ALL and Export", nullptr));
        Button_BubbleSort_Visual->setText(QCoreApplication::translate("Computer_Programing_Training", "Bubble Sort", nullptr));
        Button_SelectSort_Visual->setText(QCoreApplication::translate("Computer_Programing_Training", "Select Sort", nullptr));
        Button_InsertSort_Visual->setText(QCoreApplication::translate("Computer_Programing_Training", "Insert Sort", nullptr));
        Button_QuickSort_Visual->setText(QCoreApplication::translate("Computer_Programing_Training", "Quicksort", nullptr));
        Button_Piano_Play->setText(QCoreApplication::translate("Computer_Programing_Training", "Piano play: Mixue Icecream Tea", nullptr));
        Button_Keyboard_Piano->setText(QCoreApplication::translate("Computer_Programing_Training", "Keyboard Piano", nullptr));
        label_6->setText(QCoreApplication::translate("Computer_Programing_Training", "Common setting: Set random vector->", nullptr));
        Button_Set->setText(QCoreApplication::translate("Computer_Programing_Training", "Set!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Computer_Programing_Training: public Ui_Computer_Programing_Training {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWPVVNXO_H
