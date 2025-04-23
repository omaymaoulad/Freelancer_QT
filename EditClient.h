#ifndef EDITCLIENT_H
#define EDITCLIENT_H

#include <QWidget>
#include <QSqlDatabase>
#include "ui_EditClient.h"
namespace Ui {
    class EditClient;
}

class EditClient : public QWidget
{
    Q_OBJECT

public:
    explicit EditClient(QWidget *parent = nullptr);
    ~EditClient();

private slots:
    void on_btnSearch_clicked();
    void on_btnUpdate_clicked();
    void on_btnCancel_clicked();
    void on_btnDelete_clicked();
    void on_btnBack_clicked();

private:
    Ui::EditClient *ui;
    QString currentClientEmail;
};

#endif // EDITCLIENT_H
