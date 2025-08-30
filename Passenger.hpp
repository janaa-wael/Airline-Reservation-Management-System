#include <iostream>
#include <vector>
#include "User.hpp"
#include "Reservation.hpp"
#include "Flight.hpp"
using namespace std;

class Passenger : public User{
private:
    string passportNum;
    string contactInfo;
    vector<Reservation> reservations;
public:
    bool login(string username, string password) override;
    void logout() override;
    void displayMenu() override;
    void viewFlights();
    Reservation bookFlight(Flight f);
    void cancelReservation(int reservationId);
    void viewMyReservations();

};
