#ifndef QUESTION_H
#define QUESTION_H

#include <QDialog>
#include "mainwindow.h"
#include "Database.hpp"
#include "TextEditID.hpp"
#include "ButtonID.hpp"
#include "proposition.h"
#include "QuestionTable.hpp"

namespace Ui {
class Question;
}

/**
*\brief Classe representant la page de gestion des questions
*/
class Question : public QDialog
{
    Q_OBJECT

public:
  /**
    *\brief Constructeur
    *
    *\param db : Conexion a une BDD
    *
    *\param id: id du theme auquelle seront lies les questions affiches
    *
    *\param parent : QWidget parent de la fenetre
    */
    explicit Question(std::shared_ptr<Database> db, int id, QWidget *parent = 0);
    ~Question();

private slots:
  void on_Utilisateur_clicked();
  void changeChoix1(TextEditID*, int);
  void changeChoix2(TextEditID*, int);
  void changeQuestionState(PushButtonID*, int);
  void propositionPage(PushButtonID*, int);
  void deleteQuestion(PushButtonID*, int);
  void addQuestion();
  void toTheme();


private:
    Ui::Question *ui;
    std::shared_ptr<Database> database;
    QuestionTable questionTable;
    int id_theme;
};

#endif // QUESTION_H
