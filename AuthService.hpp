#include <iostream>
#include <string>
#include "User.hpp"
using namespace std;

class AuthService{

public:
    User* login(string username, string password);
    void logout(User* user);
};
