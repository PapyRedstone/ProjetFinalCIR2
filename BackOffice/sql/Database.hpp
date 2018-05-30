#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <utility>
#include <algorithm>

class Database{
public:
  Database(const std::string& url, const std::string& user, const std::string& password, const std::string& database);
  ~Database(){}

  void errorMessage(sql::SQLException& e);
  std::vector<std::pair<std::string,std::string>> executeQuery(std::string& query, std::vector<std::string> resultSet=std::vector<std::string>{});
  
private:
  std::shared_ptr<sql::Connection> connection;
  std::shared_ptr<sql::Statement> statement;
};

#endif
