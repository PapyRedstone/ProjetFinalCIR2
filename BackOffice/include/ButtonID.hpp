#ifndef BUTTON_ID_HPP
#define BUTTON_ID_HPP

#include <QtWidgets>

/**
  *\brief Class derivé de QPushButton ajoutant la getion d'un id
  *
  *Cette class dérive de QPushButton mais va gerer un ID qui va etre envoyer via un signal
  *
  */

class PushButtonID: public QPushButton{
  Q_OBJECT

public:
  PushButtonID(int id, QWidget* p=nullptr):QPushButton{p}, ID{id}{
    connect(this,SIGNAL(released()),this,SLOT(push()));
  }
  virtual ~PushButtonID(){}

private slots:
  void push(){
    emit click(this,ID);
  }

signals:
  /**
    *\brief signal envoyer a l'appuye du bouton
    */
  void click(PushButtonID*, int);

private:
  int ID;
    
};

#endif
