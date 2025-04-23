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

    // Connect manual slots (if not using auto-slot naming)
    connect(ui->btnAddClient, &QPushButton::clicked, this, &Client::on_btnAddClient_clicked);
    connect(ui->btnEditClient, &QPushButton::clicked, this, &Client::on_btnEditClient_clicked);
    connect(ui->btnAllClients, &QPushButton::clicked, this, &Client::on_btnAllClients_clicked);
}

Client::~Client() {
    delete ui;
}

void Client::on_btnAddClient_clicked() {
    this->hide();  // ou this->close(); si tu veux vraiment la fermer
    AddClient *add = new AddClient();  // 👈 pas de parent ici
    add->setAttribute(Qt::WA_DeleteOnClose); // nettoie à la fermeture
    add->show();  // On cache au lieu de fermer
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
