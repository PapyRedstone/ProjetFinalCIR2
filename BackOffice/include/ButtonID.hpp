#ifndef BUTTON_ID_HPP
#define BUTTON_ID_HPP

#include <QtWidgets>

/**
  *\brief Class derivé de QPushButton ajoutant la gestion d'un id au bouton
  *
  *Cette class dérive de QPushButton mais va gerer un ID qui va etre envoyer via un signal
  *
  */
class PushButtonID: public QPushButton{
  Q_OBJECT

public:
  /**
  *\brief Constructeur
  *
  *\param id : ID qui sera envoyer lors de l'appuye du bouton
  *\param p : QWidget parent de l'objet
  */
  PushButtonID(int id, QWidget* p=nullptr):QPushButton{p}, ID{id}{
    connect(this,SIGNAL(released()),this,SLOT(push()));
  }
  virtual ~PushButtonID(){}

signals:
  /**
    *\brief Signal envoyé a l'appuye du bouton
    */
  void click(PushButtonID*, int);

private slots:
  void push(){
    emit click(this,ID);
  }

private:
  int ID;
    
};

#endif
