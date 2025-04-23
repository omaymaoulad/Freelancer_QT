#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include "ui_register.h"
namespace Ui {
    class Register;
}

class Register : public QWidget {
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_btnCreateAccount_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
