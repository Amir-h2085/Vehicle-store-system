#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle{
protected:
    string brand, modle, color;
    int year,maxSpeed;
public:
    Vehicle(const string&, const string&, const string&, int, int);
    virtual void drive() const = 0;
    virtual void print() const = 0;
    virtual bool canSell() const = 0;
    virtual bool canRent() const = 0;
    virtual ~Vehicle() = default;

};

#endif