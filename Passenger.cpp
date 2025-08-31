#include <iostream>
#include "User.hpp"
#include "Reservation.hpp"
#include "Passenger.hpp"
using namespace std;

bool Passenger::login(string username, string password) 
{
    return username == this->getUsername() && password == this->getPassword();
}
void Passenger::logout() 
{
    // Clear session data
    this->setUsername("");
    this->setPassword("");
}

void Passenger::displayMenu() 
{
    cout << "1. View Flights" << endl;
    cout << "2. Book Flight" << endl;
    cout << "3. Cancel Reservation" << endl;
    cout << "4. View My Reservations" << endl;
    cout << "5. Logout" << endl;
}

Reservation Passenger::bookFlight(Flight& f)
{
    f.reserveSeat();
    Reservation r;
    r.setFlight(f);
    r.setPassenger(*this);
    reservations.push_back(r);
    return r;
}

void Passenger::cancelReservation(int reservationId)
{
    auto it = find_if(reservations.begin(), reservations.end(), [reservationId](const Reservation& r) {
        return r.getId() == reservationId;
    });
    if (it != reservations.end()) {
        it->getFlight().cancelSeat();
        reservations.erase(it);
    }
}

void Passenger::viewMyReservations()
{
    for(auto r : reservations)
    {
        r.displayReservationInfo();
    }
}