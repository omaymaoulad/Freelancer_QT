#ifndef ADDINVOICE_H
#define ADDINVOICE_H
#include <QWidget>
#include "ui_AddInvoice.h"
namespace Ui {
class AddInvoice;
}

class AddInvoice : public QWidget
{
    Q_OBJECT

public:
    explicit AddInvoice(QWidget *parent = nullptr);
    ~AddInvoice();

private slots:
    void on_btnSave_clicked();
    void on_btnCancel_clicked();

private:
    Ui::AddInvoice *ui;
    void loadProjects();
};

#endif // ADDINVOICE_H
