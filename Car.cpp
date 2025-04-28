#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(const string& brand, const string& modle, const string& color, int year, int maxSpeed, long int price) :
Vehicle(brand,modle,color,year,maxSpeed),Sell(price){}

void Car::drive() const{
    for (size_t i = 0; i <= maxSpeed; i++)
    {
        cout << i ;
        if(i != maxSpeed) cout << ", ";
    }
    cout << endl;
}

void Car::print() const{
    cout << "Car" << endl << "Brand: " << brand << " ,Modle: " << modle << " ,Color: " << color << " ,Year of production: " << year
    << " ,Max Speed: " << maxSpeed << " ,Price: " << price << endl;
}

void Car::sell() const{
    cout << "Selling car for " << price << " dollars." << endl;
}

bool Car::canSell() const{
    return true;
}

bool Car::canRent() const{
    return false;
}