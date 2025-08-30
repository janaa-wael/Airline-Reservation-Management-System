#include <iostream>
#include "User.hpp"
#include "Reservation.hpp"
#include "Passenger.hpp"
#include "Flight.hpp"
using namespace std;

class Agent : public User{
private:
    string agencyName;
public:
    bool login(string username, string password) override;
    void logout() override;
    void displayMenu() override;
    void viewFlights();
    Reservation makeBookingForPassenger(Passenger p, Flight f);
    void handlePayment(Reservation r);
};