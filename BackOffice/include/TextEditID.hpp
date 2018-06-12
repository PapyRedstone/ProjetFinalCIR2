#ifndef TEXT_EDIT_ID_HPP
#define TEXT_EDIT_ID_HPP

#include <QtWidgets>

class TextEditID: public QTextEdit{
  Q_OBJECT

public:
  TextEditID(int id, QWidget* p=nullptr):QTextEdit{p}, ID{id}{
    connect(this,SIGNAL(textChanged()),this,SLOT(txtC()));
  }
  virtual ~TextEditID(){}

public slots:
  void txtC(){
    emit textChange(this, ID);
  }

signals:
  void textChange(TextEditID*, int);

private:
  int ID;
    
};

#endif
