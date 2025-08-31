#include <iostream>
using namespace std;

class Crew{
private:
    int id;
    string name;
    string role;
    int maxHoursPerMonth;
    int assignedHours;
    bool available;
public:
    Crew(int id, const std::string &n, const std::string &r, int maxHrs = 80);
    int getId() const;
    std::string getName() const;
    std::string getRole() const;
    bool isAvailable() const;
    int getAssignedHours() const;
    void assignToFlight(int flightHours);
    void resetMonth();
    void displayInfo() const;
};