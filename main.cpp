#include <QApplication>
#include "mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(true);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("freelancers.db");
    qDebug() << "Base de données ouverte : " << db.databaseName();


    if (!db.open()) {
        qDebug() << "Erreur de connexion à la base de données";
        return -1;
    }

    // Créer la table utilisateurs si elle n'existe pas
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS utilisateurs ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "nom TEXT NOT NULL,"
               "email TEXT UNIQUE NOT NULL,"
               "motdepasse TEXT NOT NULL)");
    query.exec("CREATE TABLE IF NOT EXISTS clients ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "name TEXT NOT NULL,"
               "email TEXT NOT NULL,"
               "phone TEXT,"
               "address TEXT,"
               "country TEXT,"
               "company TEXT,"
               "client_type TEXT,"
               "notes TEXT NULL,"
               "created_at DATETIME DEFAULT CURRENT_TIMESTAMP)");
    query.exec("CREATE TABLE IF NOT EXISTS projects ("
                "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                "client_id INTEGER NOT NULL,"
                "name TEXT NOT NULL,"
                "description TEXT,"
                "start_date DATE,"
                "end_date DATE,"
                "budget REAL,"
                "status TEXT,"
                "FOREIGN KEY (client_id) REFERENCES clients(id))");
    query.exec("CREATE TABLE IF NOT EXISTS invoices ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "project_id INTEGER NOT NULL,"
               "issue_date DATE,"
               "due_date DATE,"
               "amount REAL,"
               "status TEXT,"
               "description TEXT,"
               "FOREIGN KEY (project_id) REFERENCES projects(id))");

    if (query.lastError().isValid()) {
        qDebug() << "Erreur lors de la création des tables :" << query.lastError().text();
    } else {
        qDebug() << "Tables vérifiées/créées avec succès.";
    }

    MainWindow w;
    w.show();
    return a.exec();
}

