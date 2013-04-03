#include "user.h"

User::User()
{
  sName = "";
  sSurname = "";
}

User::~User()
{

}

void User::setName(string &sVal)
{
  this->sName = sVal;
}

void User::setSurname(string &sVal)
{
  this->sSurname = sVal;
}

string User::getName()
{
  return sName;
}

string User::getSurname()
{
  return sSurname;
}

string User::toString()
{
  return sName + " " + sSurname;
}