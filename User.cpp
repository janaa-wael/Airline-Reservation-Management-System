#include <iostream>
#include "User.hpp"
using namespace std;

string User::getName() const
{
    return this->name;
}
string User::getUsername() const 
{
    return this->username;
}
string User::getPassword() const
{
    return this->password;
}
string User::getRole() const
{
    return this->role;
}

void User::setName(const string& name)
{
    this->name = name;
}

void User::setUsername(const string& username)
{
    this->username = username;
}


void User::setPassword(const string& password)
{
    this->password = password;
}
bool User::login(string username, string password) 
{
    return username == this->getUsername() && password == this->getPassword();
}

void User::logout()
{
    cout << "User " << this->getUsername() << " logged out." << endl;
    // Perform logout actions
    this->setUsername("");
    this->setPassword("");
}
