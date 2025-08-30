#include <iostream>
#include "Aircraft.hpp"
using namespace std;

bool Aircraft::isAvailable()
{
    return status == "Available";
}
void Aircraft::assignFlight(int flightID)
{
    id = flightID;
    status = "Assigned";
}

void Aircraft::markUnderMaintenance()
{
    status = "Under Maintenance";
}
