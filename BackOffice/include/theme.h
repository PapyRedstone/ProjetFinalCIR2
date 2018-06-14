#ifndef THEME_H
#define THEME_H

#include <QDialog>
#include "mainwindow.h"
#include "Database.hpp"
#include "ThemeTable.hpp"
#include "TextEditID.hpp"
#include "question.h"

namespace Ui {
class Theme;
}

/**
*\brief Classe representant la page de gestions des themes
*/
class Theme : public QDialog
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
    explicit Theme(std::shared_ptr<Database> db, QWidget *parent = 0);
    ~Theme();

public slots:
    void on_Utilisateur_clicked();
    void changeThemeName(TextEditID*, int);
    void changeThemeState(PushButtonID* but, int id);
    void questionPage(PushButtonID*, int id);
    void deleteTheme(PushButtonID*, int id);
    void addTheme();

private:
    Ui::Theme *ui;
    Ui::Theme *theme;
    std::shared_ptr<Database> database;
    ThemeTable themeTable;
};

#endif // THEME_H
