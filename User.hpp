#include <iostream>
using namespace std;

class User{
private:
    int id;
    string name;
    string username;
    string password;
    string role;
public:
    virtual bool login(string username, string password) = 0;
    virtual void logout() = 0;
    virtual void displayMenu() = 0;
};