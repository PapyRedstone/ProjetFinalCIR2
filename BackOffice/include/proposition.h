#ifndef PROPOSITION_H
#define PROPOSITION_H

#include <QDialog>
#include "mainwindow.h"
#include "Database.hpp"
#include "ButtonID.hpp"
#include "TextEditID.hpp"
#include "PropositionTable.hpp"

namespace Ui {
class Proposition;
}

/**
*\brief Classe representant la page de gestion des propositions
*/
class Proposition : public QDialog
{
    Q_OBJECT

public:
    /**
    *\brief Constructeur
    *
    *\param db : Conexion a une BDD
    *
    *\param id: id de la question auquelle seront lies les propositions affiches
    *
    *\param parent : QWidget parent de la fenetre
    */
    explicit Proposition(std::shared_ptr<Database> db, int id, QWidget *parent = 0);
    ~Proposition();

private slots:
    void on_Utilisateur_clicked();
    void changeProposition(TextEditID* txt, int id);
    void changePropositionState(PushButtonID* but, int id);
    void deleteProposition(PushButtonID*, int id);
    void addProposition();
    void toTheme();

private:
    Ui::Proposition *ui;
    std::shared_ptr<Database> database;
    PropositionTable propositionTable;
    int id_question;
};

#endif // PROPOSITION_H
