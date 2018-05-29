#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <stdexcept>

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>


using namespace std;

int main(int argc, const char **argv)
{
  string url = "127.0.0.1";
  const string user = "test";
  const string pass = "test";
  const string database = "test";

  cout << "Connector/C++ tutorial framework..." << endl;
  cout << endl;

  try {

    sql::Driver* driver = get_driver_instance();
    std::shared_ptr<sql::Connection> con(driver->connect(url, user, pass));
    con->setSchema(database);
    std::shared_ptr<sql::Statement> stmt(con->createStatement());
 
    // We need not check the return value explicitly. If it indicates
    // an error, Connector/C++ generates an exception.
    //    stmt->execute("SELECT * FROM test");

    std::shared_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT * FROM test"));
    while(res->next()){
      cout << res->getString("test") << "\n";
    }
    
  } catch (sql::SQLException &e) {
    /*
      MySQL Connector/C++ throws three different exceptions:

      - sql::MethodNotImplementedException (derived from sql::SQLException)
      - sql::InvalidArgumentException (derived from sql::SQLException)
      - sql::SQLException (derived from std::runtime_error)
    */
    cout << "# ERR: SQLException in " << __FILE__;
    cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
    /* what() (derived from std::runtime_error) fetches error message */
    cout << "# ERR: " << e.what();
    cout << " (MySQL error code: " << e.getErrorCode();
    cout << ", SQLState: " << e.getSQLState() << " )" << endl;

    return -1;
  }

  return 0;
}
