#include <iostream>
#include <unordered_map>
#include "User.hpp"
#include "Aircraft.hpp"
#include "Flight.hpp"
using namespace std;

class Admin : public User{
private:
    std::unordered_map<std::string, std::shared_ptr<User>> users;
public:
    void logout() override;
    void displayMenu() override;
    void addUser(const string& type, const string& name, const string& password);
    void deleteUser(const string& username);
    void listUsers();
};