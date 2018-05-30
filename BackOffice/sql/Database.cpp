#include "Database.hpp"

Database::Database(const std::string& url, const std::string& user, const std::string& password, const std::string& database){
  try{
    auto driver = get_driver_instance();
    connection = std::shared_ptr<sql::Connection>(driver->connect(url,user,password));
    connection->setSchema(database);

    statement = std::shared_ptr<sql::Statement>(connection->createStatement());
    
  }catch(sql::SQLException &e){
    errorMessage(e);
  }
}

void Database::errorMessage(sql::SQLException& e){
  std::cerr << "# ERR: SQLException in " << __FILE__;
  std::cerr << "(" << __FUNCTION__ << ") on line " << __LINE__ << "\n";
  /* what() (derived from std::runtime_error) fetches error message */
  std::cerr << "# ERR: " << e.what();
  std::cerr << " (MySQL error code: " << e.getErrorCode();
  std::cerr << ", SQLState: " << e.getSQLState() << " )" << "\n";
}

std::vector<std::pair<std::string,std::string>> Database::executeQuery(std::string& query, std::vector<std::string> resultSet){
  std::vector<std::pair<std::string,std::string>> result;

  std::transform(query.begin(), query.end(), query.begin(), tolower);
  
  try{
    std::shared_ptr<sql::ResultSet> resultSql(statement->executeQuery(query));
    
    if(query.find("select") != std::string::npos)
    while(resultSql->next()){
      for(auto output: resultSet){
	result.push_back(std::make_pair(output, resultSql->getString(output)));
      }
    }
  }catch(sql::SQLException &e){
    errorMessage(e);
  }

  return result;
}
