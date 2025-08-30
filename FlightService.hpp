#include <iostream>
#include <string>
#include <vector>
#include "Flight.hpp"
using namespace std;

class FlightService{
public:
    void addFlight(Flight f);
    void deleteFlight(int id);
    vector<Flight> searchFlights(string source, string destination);
};
