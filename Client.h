#ifndef CLIENT_H
#define CLIENT_H
#include <QWidget>

namespace Ui {
    class Client;
}

class Client : public QWidget {
    Q_OBJECT

public:
    explicit Client(QWidget *parent = nullptr);
    ~Client();

private slots:
    void on_btnAddClient_clicked();
    void on_btnEditClient_clicked();
    void on_btnAllClients_clicked();
    void on_btnBack_clicked();

private:
    Ui::Client *ui;
};

#endif // CLIENT_H
