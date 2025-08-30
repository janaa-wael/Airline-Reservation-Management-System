#include <iostream>
#include <string>
#include "Aircraft.hpp"
using namespace std;

class MaintenanceLog{
private:
    int id;
    Aircraft aircraft;
    string description;
    string date;
    string status; // Completed, In Progress, Pending

public:
    void markCompleted();
};