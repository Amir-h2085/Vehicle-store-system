#include "Motorcycle.h"
#include <iostream>
using namespace std;

Motorcycle::Motorcycle(const string& brand, const string& modle, const string& color, int year, int maxSpeed, long int price, double DailyRentPrice) :
Vehicle(brand,modle,color,year,maxSpeed),Sell(price),Rent(DailyRentPrice){}

void Motorcycle::drive() const{
    for (size_t i = 0; i <= (maxSpeed/2); i++)
    {
        cout << i ;
        if(i != maxSpeed) cout << ", ";
    }
    cout << endl;
}

void Motorcycle::print() const{
    cout << "Motorcycle" << endl << "Brand: " << brand << " ,Modle: " << modle << " ,Color: " << color << " ,Year of production: " << year
    << " ,Max Speed: " << maxSpeed << " ,Price: " << price << " ,daily rent price: " << DailyRentPrice << endl;
}

void Motorcycle::sell() const{
    cout << "Selling motorcycle for " << price << " dollars." << endl;
}

void Motorcycle::rent(int days){
    if (isRented) {
        cout << "Motorcycle is already rented!" << endl;
    } else {
        cout << "Renting motorcycle for " << days << " days. Total rent: " << DailyRentPrice * days << " dollars." << endl;
        isRented = true;
    }
}

void Motorcycle::returnRental(){
    if (isRented) {
        cout << "Motorcycle has been returned." << endl;
        isRented = false;
    } else {
        cout << "Motorcycle is available for rent." << endl;
    }
}

bool Motorcycle::canSell() const{
    return !isRented;
}

bool Motorcycle::canRent() const{
    return true;
}