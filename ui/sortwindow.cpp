//
// Created by admin on 2021/7/6.
//

// You may need to build the project (run Qt uic code generator) to get "ui_sortwindow.h" resolved

#include "sortwindow.h"
#include "ui_sortwindow.h"

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

