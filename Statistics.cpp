#include "Statistics.h"
#include "ui_Statistics.h"
#include "Acceuil.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QtCharts/QLegend>

Statistics::Statistics(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Statistics)
{
    ui->setupUi(this);
    loadStatistics();
    connect(ui->btnBack, &QToolButton::clicked, this, &Statistics::on_btnBack_clicked);
}

Statistics::~Statistics()
{
    delete ui;
}

void Statistics::loadStatistics()
{
    QPieSeries *series = new QPieSeries();
    QSqlQuery query;

    query.exec("SELECT status, COUNT(*) FROM projects GROUP BY status");
    while (query.next()) {
        QString status = query.value(0).toString();
        int count = query.value(1).toInt();
        series->append(status, count);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Projects by Status");
    chart->legend()->show();

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->layoutChart->layout()->addWidget(chartView);
}
void Statistics::on_btnBack_clicked()
{
    Acceuil *home = new Acceuil();
    home->show();
    this->close();
}

