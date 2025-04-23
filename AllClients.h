#ifndef ALLCLIENTS_H
#define ALLCLIENTS_H
#include <QWidget>

namespace Ui {
class AllClients;
}
class AllClients : public QWidget
{
    Q_OBJECT
public:
    explicit AllClients(QWidget *parent = nullptr);
    ~AllClients();
private slots:
    void on_lineSearch_textChanged(const QString &text);
    void handleRowClicked(const QModelIndex &index);
    void on_BtnBack_clicked();
private:
    Ui::AllClients *ui;
    void loadClients(const QString &filter = "");
};
#endif
