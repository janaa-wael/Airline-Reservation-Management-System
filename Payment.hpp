#include <iostream>
#include <string>
#include "Reservation.hpp"
using namespace std;

class Payment{
private:
    int id;
    Reservation reservation;
    double amount;
    string paymentMethod; // Credit Card, Debit Card, PayPal, etc.
    string status; // Completed, Pending, Failed

public:
    bool process();
    void refund();
};