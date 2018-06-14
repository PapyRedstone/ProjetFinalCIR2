#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "mainwindow.h"
#include "Database.hpp"

namespace Ui {
class Menu;
}

/**
*\brief Classe representant la page du menu
*/
class Menu : public QDialog
{
    Q_OBJECT

public:
	/**
	*\brief Constructeur
	*
	*\param db : Conexion a une BDD
	*
	*\param parent : QWidget parent de la fenetre
	*/
    explicit Menu(std::shared_ptr<Database> db,QWidget *parent = 0);
    ~Menu();

private slots:
    void on_Question_clicked();

    void on_Utilisateur_clicked();

private:
    Ui::Menu *ui;
    Ui::Menu *menu;
    std::shared_ptr<Database> database;
};

#endif // MENU_H
