#include <iostream>
#include <vector>
#include "User.hpp"
#include "Flight.hpp"
using namespace std;

class Reservation;
class Passenger : public User{
private:
    string passportNum;
    string contactInfo;
    vector<Reservation> reservations;
public:
    void displayMenu() override;
    Reservation bookFlight(Flight& f);
    void cancelReservation(int reservationId);
    void viewMyReservations();
};
