#ifndef EDITPROJECT_H
#define EDITPROJECT_H
#include <QWidget>
#include <QSqlDatabase>
#include "ui_EditProject.h"

namespace Ui{
class EditProject;
}
class EditProject : public QWidget
{
    Q_OBJECT
public:
    explicit EditProject(QWidget *parent= nullptr);
    ~EditProject();
private slots:
    void on_btnSearch_clicked();
    void on_BtnUpdate_clicked();
    void on_BtnCancel_clicked();
    void on_BtnDelete_clicked();
    void on_BtnBack_clicked();
private:
    Ui :: EditProject *ui;
    int currentProjectId = -1; //suivre le projet sélectionné
    void clearFields();
};
#endif // EDITPROJECT_H
