#ifndef ADDCLIENT_H
#define ADDCLIENT_H
#include "ui_AddClient.h"
#include <QWidget>

namespace Ui{
    class AddClient;
}
class AddClient : public QWidget {
    Q_OBJECT;

public:
    explicit AddClient(QWidget *parent = nullptr);
    ~AddClient();
private slots:
    void on_btnSave_clicked();
    void on_btnCancel_clicked();
    void on_btnBack_clicked();
private :
    Ui::AddClient *ui;
};

#endif // ADDCLIENT_H
