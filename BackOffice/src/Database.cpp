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
  std::cerr << "# ERR: " << e.what();
  std::cerr << " (MySQL error code: " << e.getErrorCode();
  std::cerr << ", SQLState: " << e.getSQLState() << " )" << "\n";
}

std::vector<std::map<std::string, std::string>> Database::executeQuery(std::string& query){
  std::vector<std::map<std::string, std::string>> result;

  try{
    if(toLower(getWords(query,' ')[0]) == "select"){
      std::shared_ptr<sql::ResultSet> resultSql(statement->executeQuery(query));

      std::vector<std::string> tableCol = getCollumsName(query);
      
      while (resultSql->next()) {
	std::map<std::string, std::string> tmp;
	for(auto col: tableCol){
	  tmp[col] = resultSql->getString(col);
	}
	
	result.push_back(tmp);
      }
    }else{
      statement->execute(query);
    }
  }catch(sql::SQLException &e){
    errorMessage(e);
  }
  
  return result;
}

std::vector<std::string> Database::getCollumsName(const std::string& s){
  auto words = getWords(s,' ');

  return removeUselessWords(words);
}

std::vector<std::string> Database::removeUselessWords(std::vector<std::string> words){
  std::vector<std::string> resultWords;

  for(auto word: words){
    std::string lowerWord = toLower(word);
    if(lowerWord == "select"){
      continue;
    }else if(lowerWord == "from"){
      break;
    }

    resultWords.push_back(word);
  }

  return removeUselessLetters(resultWords);
}

std::vector<std::string> Database::separateWords(std::vector<std::string> words){
  std::vector<std::string> result;
  for_each(words.begin(), words.end(), [&](std::string& s){
      for(auto i: getWords(s,',')){
	result.push_back(i);
      }
    });
  return removeUselessLetters(result);
}

std::vector<std::string> Database::removeUselessLetters(std::vector<std::string> words){
  bool separateword=false;
  words.erase(std::remove(words.begin(), words.end(), ","), words.end());
  for_each(words.begin(), words.end(), [&](std::string& s){
      if(s.back() == ','){
	separateword = true;
	s.pop_back();
      }
    });
  return separateword?separateWords(words):words;
}

bool Database::isAlive(){
  try{
    if(connection){
      return connection->isValid();
    }
    return false;
  }catch(sql::SQLException &e){
    return false;
  }
}
