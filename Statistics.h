#ifndef STATISTICS_H
#define STATISTICS_H
#include <QWidget>
#include "ui_Statistics.h"
namespace Ui {
class Statistics;
}

class Statistics : public QWidget
{
    Q_OBJECT

public:
    explicit Statistics(QWidget *parent = nullptr);
    ~Statistics();

private:
    Ui::Statistics *ui;
    void loadStatistics();
    void on_btnBack_clicked();
};
#endif // STATISTICS_H
