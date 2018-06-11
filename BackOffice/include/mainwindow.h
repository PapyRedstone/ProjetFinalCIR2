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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
  void on_Connexion_clicked();

private:
    Ui::MainWindow *ui;
    QSettings settings;
};

#endif // MAINWINDOW_H