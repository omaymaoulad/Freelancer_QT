#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H
#include "ui_Forgotpassword.h"
#include<QWidget>

namespace Ui{
class Forgotpassword;
}
class Forgotpassword : public QWidget{
    Q_OBJECT
public:
    explicit Forgotpassword(QWidget *parent = nullptr);
    ~Forgotpassword();

private slots:
    void on_btnResetPassword_clicked();
    void on_btnBackToLogin_clicked();

private:
    Ui::Forgotpassword *ui;
};

#endif // FORGOTPASSWORD_H
