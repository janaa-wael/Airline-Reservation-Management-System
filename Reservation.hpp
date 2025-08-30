#include <iostream>
#include "Passenger.hpp"
using namespace std;

class Reservation{
private:
    int id;
    Passenger passenger;
    Flight flight;
    int seatNo;
    string status; //Confirmed, Cancelled, Pending

public:
    void setPassenger(const Passenger& p);
    void setFlight(const Flight& f);
    Flight& getFlight();
    int getId() const;
    void confirm();
    void cancel();
    void displayReservationInfo();
};