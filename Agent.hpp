#include <iostream>
#include "User.hpp"
#include "Reservation.hpp"
#include "Passenger.hpp"
#include "Flight.hpp"
using namespace std;

class Agent : public User{
private:
    string agencyName;
    vector<Flight> availableFlights;
public:
    void displayMenu() override;
    void viewFlights();
    Reservation makeBookingForPassenger(Passenger p, Flight f);
    void handlePayment(Reservation r);
};