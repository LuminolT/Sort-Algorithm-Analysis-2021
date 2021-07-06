//
// Created by admin on 2021/7/6.
//

#ifndef SORT_ALGORITHM_ANALYSIS_2021_MAINWINDOW_H
#define SORT_ALGORITHM_ANALYSIS_2021_MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};


#endif //SORT_ALGORITHM_ANALYSIS_2021_MAINWINDOW_H
