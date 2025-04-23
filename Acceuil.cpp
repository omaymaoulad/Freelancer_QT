#include "Acceuil.h"
#include "ui_Acceuil.h"
#include "Client.h"
#include "Project.h"

Acceuil::Acceuil(QWidget *parent)
    : QWidget(parent), ui(new Ui::Acceuil) {
    ui->setupUi(this);
}

Acceuil::~Acceuil() {
    delete ui;
}
void Acceuil::on_btnClients_clicked()
{
    Client *clientSection = new Client();
    clientSection->show();
    this->close();
}
void Acceuil::on_btnProjects_clicked()
{
    Project *projectSection = new Project();
    projectSection->show();
    this->close();

}
