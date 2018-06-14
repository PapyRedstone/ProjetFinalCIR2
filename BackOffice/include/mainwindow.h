#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <memory>
#include "menu.h"
#include "theme.h"
#include "utilisateur.h"
#include "Database.hpp"

namespace Ui {
class MainWindow;
}

/**
*\brief Classe représentant la page de connexion lors du lancement du programme*
*
*Classe prégénerer par QtDesigner qui represente la page de connexion 
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
	/*
	*\brief Constructeur
	*
	*\param parent : QWidget parent de la fenetre
	*/
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
  void on_Connexion_clicked();

private:
    Ui::MainWindow *ui;
    QSettings settings;
};

#endif // MAINWINDOW_H
