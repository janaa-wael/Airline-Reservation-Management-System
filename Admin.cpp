#include <iostream>
#include "Admin.hpp"
#include "Passenger.hpp"
#include "Agent.hpp"
using namespace std;

void Admin::displayMenu() 
{
    cout << "1. Add User" << endl;
    cout << "2. Delete User" << endl;
    cout << "3. List Users" << endl;
    cout << "4. Logout" << endl;
}
void Admin::addUser(const string& type, const string& name, const string& password)
{
    if (type == "passenger") {
        users[name] = make_shared<Passenger>();
    } else if (type == "admin") {
        users[name] = make_shared<Admin>();
    }
    else if(type == "agent"){
        users[name] = make_shared<Agent>();
    }
    users[name]->setUsername(name);
    users[name]->setPassword(password);
}
void Admin::deleteUser(const string& username)
{
    auto it = users.find(username);
    if(it != users.end())
    {
        users.erase(it);
    }

}
void Admin::listUsers()
{
    auto it = users.begin();
    while(it != users.end())
    {
        cout << "Username: " << it->first << endl;
        cout << "Role: " << it->second->getRole() << endl;
        cout << "------------------------" << endl;
    }
}