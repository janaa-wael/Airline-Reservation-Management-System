#include <iostream>
#include "Agent.hpp"
using namespace std;

bool Agent::login(string username, string password)
{
    return this->getUsername() == username && this->getPassword() == password;
}

void Agent::logout() 
{
    cout << "Logging out..." << endl;
    // Perform logout operations
    this->setUsername("");
    this->setPassword("");
}

void displayMenu() 
{
    cout << "1. View Flights" << endl;
    cout << "2. Make Booking" << endl;
    cout << "3. View Bookings" << endl;
    cout << "4. Logout" << endl;
}

void Agent::viewFlights()
{
    
}

Reservation Agent::makeBookingForPassenger(Passenger p, Flight f)
{

}

void Agent::handlePayment(Reservation r)
{

}