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
    string getName() const ;
    string getUsername() const;
    string getPassword() const;
    string getRole() const;
    void setName(const string& name);
    void setUsername(const string& username);
    void setPassword(const string& password);
    virtual bool login(string username, string password) = 0;
    virtual void logout() = 0;
    virtual void displayMenu() = 0;
};