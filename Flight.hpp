#include <iostream>
#include <string>
#include <vector>
#include "Aircraft.hpp"
#include "Crew.hpp"
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
    vector <Crew> crew;
public:
    bool checkAvailability();
    int getFlightNumber() const;
    void addCrew(const Crew& member);
    void reserveSeat();
    void cancelSeat();
    void displayFlightInfo() const;

};