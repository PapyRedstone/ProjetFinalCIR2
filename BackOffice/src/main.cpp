#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

 /*
#include "Database.hpp"

int main()
{
  const std::string url = "172.31.3.50";
  const std::string user = "bq";
  const std::string pass = "bq";
  const std::string database = "bq";

  Database db(url,user,pass, database);

  std::string query = "SELECT proposition,bonne_reponse,est_active, id_question FROM Proposition";

  for(auto m: db.executeQuery(query)){
    for(auto it: m){
      std::cout << it.first << ":" << it.second << "|";
    }
    std::cout << "\n";
  }

  return 0;
}
 */
