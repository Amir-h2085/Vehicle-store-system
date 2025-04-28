#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include "Sell.h"
#include <iostream>
using namespace std;

class Car : public Vehicle , public Sell{
public:
    Car(const string&, const string&, const string&, int, int,long ing);
    void drive() const override;
    void print() const override;
    void sell() const override;
    bool canSell() const override;
    bool canRent() const override;
};

#endif