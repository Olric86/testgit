#include <iostream>
#include <string>
#include "model/user.h"

int main (int argc, char **args)
{
  std::cout << "I'm a git test!" << std::endl;
  User u;
  string str = "Carlo";
  u.setName(str);
  str = "Pastorino";
  u.setSurname(str);
  std::cout << u.toString() << std::endl;
  return 0;
}