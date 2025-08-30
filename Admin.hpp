#include <iostream>
#include "User.hpp"
#include "Aircraft.hpp"
#include "Flight.hpp"
using namespace std;

class Admin : public User{
public:
    bool login(string username, string password) override;
    void logout() override;
    void displayMenu() override;
    void addFlight(Flight f);
    void removeFlight(int flightId);
    void addAircraft(Aircraft a);
    void removeAircraft(int aircraftId);
    void viewReports();
};