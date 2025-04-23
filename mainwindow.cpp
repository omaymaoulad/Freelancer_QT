#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../Freelancers/login.h"
#include "../Freelancers/register.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->btnRegister, &QPushButton::clicked, this, &MainWindow::openRegister);
    connect(ui->btnLogin, &QPushButton::clicked, this, &MainWindow::openLogin);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::openRegister() {
    Register *reg = new Register();
    reg->show();
    this->close();
}

void MainWindow::openLogin() {
    Login *login = new Login();
    login->show();
    this->close();
}
