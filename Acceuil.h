#ifndef ACCEUIL_H
#define ACCEUIL_H

#include <QWidget>
#include "ui_Acceuil.h"
namespace Ui {
    class Acceuil;
}

class Acceuil : public QWidget {
    Q_OBJECT

public:
    explicit Acceuil(QWidget *parent = nullptr);
    ~Acceuil();
private slots :
    void on_btnClients_clicked();
    void on_btnProjects_clicked();
    void on_btnInovice_clicked();
    void on_btnStatistics_clicked();
private:
    Ui::Acceuil *ui;
};


#endif // ACCEUIL_H
