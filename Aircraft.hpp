#include <iostream>
#include <string>
using namespace std;

class Aircraft{
private:
    int id;
    string model;
    int capacity;
    string status;

public:
    bool isAvailable();
    void assignFlight(int flightID);
    void markUnderMaintenance();
};