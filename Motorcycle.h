#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "Vehicle.h"
#include "Sell.h"
#include "Rent.h"
#include <iostream>
using namespace std;

class Motorcycle : public Vehicle , public Sell , public Rent{
public:
    Motorcycle(const string&, const string&, const string&, int, int, long int, double);
    void drive() const override;
    void print() const override;
    void sell() const override;
    void rent(int) override;
    void returnRental() override;
    bool canSell() const override;
    bool canRent() const override;
};

#endif