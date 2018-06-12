#ifndef QUESTION_H
#define QUESTION_H

#include <QDialog>
#include "mainwindow.h"
#include "Database.hpp"

namespace Ui {
class Question;
}

class Question : public QDialog
{
    Q_OBJECT

public:
    explicit Question(std::shared_ptr<Database> db, int id_theme, QWidget *parent = 0);
    ~Question();

private slots:
  void on_Utilisateur_clicked();

private:
    Ui::Question *ui;
    std::shared_ptr<Database> database;
};

#endif // QUESTION_H
