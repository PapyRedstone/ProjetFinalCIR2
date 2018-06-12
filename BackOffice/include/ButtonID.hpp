#ifndef BUTTON_ID_HPP
#define BUTTON_ID_HPP

#include <QtWidgets>

class PushButtonID: public QPushButton{
  Q_OBJECT

public:
  PushButtonID(int id):ID{id}{
    connect(this,SIGNAL(released()),this,SLOT(push()));
  }
  virtual ~PushButtonID(){}

public slots:
  void push(){
    emit click(ID);
  }

signals:
  void click(int);

private:
  int ID;
    
};

#endif
