#include "Client.h"
#include "ui_Client.h"
#include "AddClient.h"
#include "EditClient.h"
#include "AllClients.h"
#include <QMessageBox>
#include "Acceuil.h"

Client::Client(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
}

Client::~Client() {
    delete ui;
}

void Client::on_btnAddClient_clicked() {

    AddClient *add = new AddClient();
    add->show();
    this->hide();
}

void Client::on_btnEditClient_clicked() {
    EditClient *edit = new EditClient();
    edit->show();
    this->close();
}

void Client::on_btnAllClients_clicked() {
    AllClients *all = new AllClients();
    all->show();
    this->close();
}
void Client::on_btnBack_clicked()
{
    Acceuil *home = new Acceuil();
    home->show();
    this->close();
}
