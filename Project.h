#ifndef PROJECT_H
#define PROJECT_H
#include "ui_Project.h"
#include <QWidget>

namespace Ui {
    class Project;
}
class Project : public QWidget {
    Q_OBJECT
public:
    explicit Project(QWidget *parent = nullptr);
    ~Project();
private slots:
    void on_btnAddProject_clicked();
    void on_btnEditProject_clicked();
    void on_btnProjectList_clicked();
    void on_btnBack_clicked();
private :
    Ui::Project *ui;
};

#endif // PROJECT_H
