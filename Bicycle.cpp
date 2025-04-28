#include "Bicycle.h"
#include <iostream>
using namespace std;

Bicycle::Bicycle(const string& brand, const string& modle, const string& color, int year, int maxSpeed, double DailyRentPrice) :
Vehicle(brand,modle,color,year,maxSpeed),Rent(DailyRentPrice){}

void Bicycle::drive() const{
    for (size_t i = 0; i < maxSpeed; i++)
    {
        cout << "pedaling";
        if(i != maxSpeed - 1) cout << ", ";
    }
    cout << endl;
}

void Bicycle::print() const{
    cout << "Bicycle" << endl << "Brand: " << brand << " ,Modle: " << modle << " ,Color: " << color << " ,Year of production: " << year
    << " ,Max Speed: " << maxSpeed << " ,daily rent price: " << DailyRentPrice << endl;
}

void Bicycle::rent(int days){
    if (isRented) {
        cout << "Bicycle is already rented!" << endl;
    } else {
        cout << "Renting Bicycle for " << days << " days. Total rent: " << DailyRentPrice * days << " dollars." << endl;
        isRented = true;
    }
}

void Bicycle::returnRental(){
    if (isRented) {
        cout << "Bicycle has been returned." << endl;
        isRented = false;
    } else {
        cout << "Bicycle is available for rent." << endl;
    }
}

bool Bicycle::canSell() const {
    return false;
}

bool Bicycle::canRent() const{
    return true;
}