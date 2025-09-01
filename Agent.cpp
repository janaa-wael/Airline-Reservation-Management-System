#include <iostream>
#include "Agent.hpp"
using namespace std;

void displayMenu() 
{
    cout << "1. View Flights" << endl;
    cout << "2. Make Booking" << endl;
    cout << "3. View Bookings" << endl;
    cout << "4. Logout" << endl;
}

void Agent::viewFlights()
{
    cout << "Available Flights:" << endl;
    for (const auto& flight : availableFlights) {
        flight.displayFlightInfo();
    }
}

Reservation Agent::makeBookingForPassenger(Passenger p, Flight f)
{
    
}

void Agent::handlePayment(Reservation r)
{

}