#ifndef TEXT_EDIT_ID_HPP
#define TEXT_EDIT_ID_HPP

#include <QtWidgets>

/**
*\brief Classe ajoutant la gestion d'un ID a un QTextEdit
*/
class TextEditID: public QTextEdit{
  Q_OBJECT

public:

  TextEditID(int id, QWidget* p=nullptr):QTextEdit{p}, ID{id}{
    connect(this,SIGNAL(textChanged()),this,SLOT(txtC()));
  }
  virtual ~TextEditID(){}

signals:
  void textChange(TextEditID*, int);

private slots:
  void txtC(){
    emit textChange(this, ID);
  }

private:
  int ID;
    
};

#endif
