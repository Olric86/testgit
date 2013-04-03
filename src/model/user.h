#include <string>
#include <iostream>

using namespace std;
class User
{
protected:
  string sName;
  string sSurname;
public:
  User();
  virtual ~User();

  // GET methods
  string getName();
  string getSurname();
  virtual string toString();

  // SET methods
  void setName(string &sVal);
  void setSurname(string &sVal);
};