#include <iostream>
#include "Crew.hpp"
using namespace std;

Crew::Crew(int id, const std::string &n, const std::string &r, int maxHrs = 80)
: id(id), name(n), role(r), maxHoursPerMonth(maxHrs), assignedHours(0)
{
    
}
int Crew::getId() const
{
    return id;
}
std::string Crew::getName() const
{
    return name;
}

std::string Crew::getRole() const
{
    return role;
}
bool Crew::isAvailable() const
{
    return available;
}
int Crew::getAssignedHours() const
{
    return assignedHours;
}
void Crew::assignToFlight(int flightHours)
{
    if (available && (assignedHours + flightHours <= maxHoursPerMonth))
    {
        assignedHours += flightHours;
    }
    else
    {
        cout << "Cannot assign crew to flight. Either not available or exceeds max hours." << endl;
    }
}

void Crew::resetMonth()
{
    assignedHours = 0;
    available = true;
}
void Crew::displayInfo() const
{
    cout << "Crew ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Role: " << role << endl;
    cout << "Max Hours/Month: " << maxHoursPerMonth << endl;
    cout << "Assigned Hours: " << assignedHours << endl;
    cout << "Available: " << (available ? "Yes" : "No") << endl;
}