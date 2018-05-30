#include "Database.hpp"


using namespace std;

int main(int argc, const char **argv)
{
  const string url = "172.31.3.50";
  const string user = "test";
  const string pass = "test";
  const string database = "test";

  Database db(url,user,pass, database);

  std::string query = "INSERT INTO test VALUES(NULL , 'COUCOU')";
  
  db.executeQuery(query);

  query = "SELECT id, test FROM test";
  
  for(auto i: db.executeQuery(query, std::vector<std::string>{"test"})){
    std::cout << i.second << "\n";
  }

  return 0;
}
