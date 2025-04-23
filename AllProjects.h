#ifndef ALLPROJECTS_H
#define ALLPROJECTS_H

#include <QWidget>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include "ui_AllProjects.h"
namespace Ui {
class AllProjects;
}

class AllProjects : public QWidget
{
    Q_OBJECT

public:
    explicit AllProjects(QWidget *parent = nullptr);
    ~AllProjects();

private slots:
    void on_lineSearch_textChanged(const QString &text);
    void on_tableClients_clicked(const QModelIndex &index);
    void on_BtnBack_clicked();

private:
    Ui::AllProjects *ui;
    QSqlQueryModel *model;

    void loadProjects(const QString &filter = "");
};

#endif // ALLPROJECTS_H
