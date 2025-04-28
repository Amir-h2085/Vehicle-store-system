#ifndef BICYCLE_H
#define BICYCLE_H
#include "Vehicle.h"
#include "Rent.h"
#include <iostream>
using namespace std;

class Bicycle : public Vehicle , public Rent{
public:
    Bicycle(const string&, const string&, const string&, int, int, double);
    void drive() const override;
    void print() const override;
    void rent(int) override;
    void returnRental() override;
    bool canSell() const override;
    bool canRent() const override;
};

#endif