//
// Created by admin on 2021/7/6.
//

#ifndef SORT_ALGORITHM_ANALYSIS_2021_SORTWINDOW_H
#define SORT_ALGORITHM_ANALYSIS_2021_SORTWINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class sortwindow; }
QT_END_NAMESPACE

class sortwindow : public QWidget {
Q_OBJECT

public:
    explicit sortwindow(QWidget *parent = nullptr);

    ~sortwindow() override;

private:
    Ui::sortwindow *ui;
};


#endif //SORT_ALGORITHM_ANALYSIS_2021_SORTWINDOW_H
