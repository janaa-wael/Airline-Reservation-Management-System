#include <iostream>
using namespace std;

class User{
protected:
    string name;
    string username;
    string password;
    string role;
private:
    int id;
public:
    string getName() const ;
    string getUsername() const;
    string getPassword() const;
    string getRole() const;
    void setName(const string& name);
    void setUsername(const string& username);
    void setPassword(const string& password);
    virtual bool login(string username, string password);
    virtual void logout();
    virtual void displayMenu() = 0;
};