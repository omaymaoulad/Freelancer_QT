#include "Project.h"
#include "ui_Project.h"
#include "AddProject.h"
#include "EditProject.h"
#include "AllProjects.h"
#include <QMessageBox>
#include "Acceuil.h"

Project::Project(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Project)
{
    ui->setupUi(this);

    // Connexions manuelles (au cas où les noms de slot ne correspondent pas au nom des objets)
    connect(ui->btnAddProject, &QPushButton::clicked, this, &Project::on_btnAddProject_clicked);
    connect(ui->btnEditProject, &QPushButton::clicked, this, &Project::on_btnEditProject_clicked);
    connect(ui->btnProjectList, &QPushButton::clicked, this, &Project::on_btnProjectList_clicked);
}

Project::~Project()
{
    delete ui;
}

void Project::on_btnAddProject_clicked(){
    AddProject *addp = new AddProject();
    addp->show();
    this->close();
}

void Project::on_btnEditProject_clicked()
{
    EditProject *editp = new EditProject();
    editp->show();
    this->close();
}

void Project::on_btnProjectList_clicked()
{
    AllProjects *allp = new AllProjects();
    allp->show();
    this->close();

}
void Project::on_btnBack_clicked()
{
    Acceuil *home = new Acceuil();
    home->show();
    this->close();
}
