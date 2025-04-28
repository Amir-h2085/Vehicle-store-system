#ifndef RENT_H
#define RENT_H
#include <iostream>
using namespace std;

class Rent{
protected:
    int days;
    bool isRented;
    double DailyRentPrice;
public:
    Rent(double);
    virtual void rent(int) = 0;
    virtual void returnRental() = 0;
    virtual ~Rent() = default;
};

#endif