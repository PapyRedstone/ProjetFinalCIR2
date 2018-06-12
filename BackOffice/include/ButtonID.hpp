#ifndef BUTTON_ID_HPP
#define BUTTON_ID_HPP

#include <QtWidgets>

class PushButtonID: public QPushButton{
  Q_OBJECT

public:
  PushButtonID(int id, QWidget* p=nullptr):QPushButton{p}, ID{id}{
    connect(this,SIGNAL(released()),this,SLOT(push()));
  }
  virtual ~PushButtonID(){}

public slots:
  void push(){
    emit click(this,ID);
  }

signals:
  void click(PushButtonID*, int);

private:
  int ID;
    
};

#endif
