//
// Created by admin on 2021/7/6.
//

// You may need to build the project (run Qt uic code generator) to get "ui_sortwindow.h" resolved

#include "sortwindow.h"
#include "ui_sortwindow.h"


sortwindow::sortwindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::sortwindow) {
    ui->setupUi(this);
}

sortwindow::~sortwindow() {
    delete ui;
}

