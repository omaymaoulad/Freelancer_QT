#ifndef ADDPROJECT_H
#define ADDPROJECT_H
#include <QWidget>
#include "ui_AddProject.h"

namespace Ui {
    class AddProject;
}

class AddProject : public QWidget
{
    Q_OBJECT

public:
    explicit AddProject(QWidget *parent = nullptr);
    ~AddProject();

private slots:
    void on_BtnSave_clicked();
    void on_BtnBack_clicked();

private:
    Ui::AddProject *ui;
    void loadClients(); // Remplissage de la comboBox des clients
};
#endif // ADDPROJECT_H
