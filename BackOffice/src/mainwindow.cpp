#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    settings("bq","adminProg")
{
    ui->setupUi(this);

    ui->NameBdd->setText(settings.value("bddName").toString());
    ui->ipbdd->setText(settings.value("url").toString());
    ui->user->setText(settings.value("user").toString());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Connexion_clicked()
{
  std::string url,user,pass,dbName;
  
  url = ui->ipbdd->text().toStdString();
  user = ui->user->text().toStdString();
  pass = ui->password->text().toStdString();
  dbName = ui->NameBdd->text().toStdString();
  
  std::shared_ptr<Database> database=std::make_shared<Database>(url,user,pass,dbName);

  if(database->isAlive()){
    settings.setValue("bddName",dbName.c_str());
    settings.setValue("url",url.c_str());
    settings.setValue("user",user.c_str());
    
    this->hide();
    Menu *menu = new Menu(database);
    menu->show();
  }
}
