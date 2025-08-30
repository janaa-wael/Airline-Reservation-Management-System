#include <iostream>
#include <string>
#include "Aircraft.hpp"
using namespace std;


class Flight{
private:
    int id;
    Aircraft aircraft;
    string source;
    string destination;
    string departureTime;
    string arrivalTime;
    int availableSeats;
public:
    bool checkAvailability();
    void reserveSeat();
    void cancelSeat();
    void displayFlightInfo();
};