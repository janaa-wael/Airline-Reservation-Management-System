#include <iostream>
#include "Reservation.hpp"

using namespace std;

void Reservation::setPassenger(const Passenger& p)
{
    this->passenger = p;
}

void Reservation::setFlight(const Flight& f)
{
    this->flight = f;
}

Flight& Reservation::getFlight()
{
    return this->flight;
}

int Reservation::getId() const
{
    return this->id;
}

void Reservation::confirm()
{
    this->status = "Confirmed";
}

void Reservation::cancel()
{
    this->status = "Cancelled";
}


void Reservation::displayReservationInfo()
{
    cout << "Reservation Info: " << endl;
    cout << "Passenger: " << passenger.getName() << endl;
    cout << "Flight: " << flight.getFlightNumber() << endl;
    cout << "Seat No: " << seatNo << endl;
    cout << "Status: " << status << endl;
}