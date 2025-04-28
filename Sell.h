#ifndef SELL_H
#define SELL_H
#include <iostream>
using namespace std;

class Sell{
protected:
    long int price;
public:
    Sell(long int);
    virtual void sell() const = 0;
    virtual ~Sell() = default;
};

#endif