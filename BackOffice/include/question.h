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

class Question : public QDialog
{
    Q_OBJECT

public:
    explicit Question(std::shared_ptr<Database> db, int id_theme, QWidget *parent = 0);
    ~Question();

private slots:
  void on_Utilisateur_clicked();
  void changeChoix1(TextEditID*, int);
  void changeChoix2(TextEditID*, int);
  void changeQuestionState(PushButtonID*, int);
  void propositionPage(PushButtonID*, int);
  void deleteQuestion(PushButtonID*, int);
  void addQuestion();


private:
    Ui::Question *ui;
    std::shared_ptr<Database> database;
    QuestionTable questionTable;
    int id_theme;
};

#endif // QUESTION_H
