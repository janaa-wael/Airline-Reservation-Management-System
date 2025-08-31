#include <iostream>
#include "Flight.hpp"
using namespace std;

bool Flight::checkAvailability()
{
    return availableSeats > 0;
}

int Flight::getFlightNumber() const
{
    return id;
}

void Flight::reserveSeat()
{
    if (checkAvailability()) {
        availableSeats--;
    } else {
        cout << "No available seats to reserve." << endl;
    }
}
void Flight::cancelSeat()
{
    availableSeats++;
}

void Flight::displayFlightInfo() const
{
    cout << "Flight Number: " << id << endl;
    cout << "Origin: " << source << endl;
    cout << "Destination: " << destination << endl;
    cout << "Departure Time: " << departureTime << endl;
    cout << "Arrival Time: " << arrivalTime << endl;
    cout << "Available Seats: " << availableSeats << endl;
}