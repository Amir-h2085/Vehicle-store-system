#include <iostream>
#include <windows.h>
#include <cstdlib>
#include "LinkedList.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Bicycle.h"

using namespace std;

int main() {
    LinkedList vehicles;
    int choice;
    system("cls");
    while (true) {
        cout << "\n====== Vehicle Management App ======" << endl;
        cout << "1. Add a Car" << endl;
        cout << "2. Add a Motorcycle" << endl;
        cout << "3. Add a Bicycle" << endl;
        cout << "4. Display All Vehicles" << endl;
        cout << "5. Perform Transaction (Sell/Rent/Return)" << endl;
        cout << "6. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;
        system("cls");

        if (choice == 1) {
            string brand, model, color;
            int year, maxSpeed;
            double price;
            cout << "Enter brand: "; cin >> brand;
            cout << "Enter model: "; cin >> model;
            cout << "Enter color: "; cin >> color;
            cout << "Enter year: "; cin >> year;
            cout << "Enter max speed: "; cin >> maxSpeed;
            cout << "Enter price: "; cin >> price;
            Vehicle* car = new Car(brand, model, color, year, maxSpeed, price);
            vehicles.addVehicle(car);
            cout << "Car added successfully." << endl;
            Sleep(1000);
            system("cls");
        } 
        else if (choice == 2) {
            string brand, model, color;
            int year, maxSpeed;
            double price, dailyRent;
            cout << "Enter brand: "; cin >> brand;
            cout << "Enter model: "; cin >> model;
            cout << "Enter color: "; cin >> color;
            cout << "Enter year: "; cin >> year;
            cout << "Enter max speed: "; cin >> maxSpeed;
            cout << "Enter sell price: "; cin >> price;
            cout << "Enter daily rent price: "; cin >> dailyRent;
            Vehicle* motorcycle = new Motorcycle(brand, model, color, year, maxSpeed, price, dailyRent);
            vehicles.addVehicle(motorcycle);
            cout << "Motorcycle added successfully." << endl;
            Sleep(1000);
            system("cls");
        }
        else if (choice == 3) {
            string brand, model, color;
            int year, maxSpeed;
            double dailyRent;
            cout << "Enter brand: "; cin >> brand;
            cout << "Enter model: "; cin >> model;
            cout << "Enter color: "; cin >> color;
            cout << "Enter year: "; cin >> year;
            cout << "Enter max speed: "; cin >> maxSpeed;
            cout << "Enter daily rent price: "; cin >> dailyRent;
            Vehicle* bicycle = new Bicycle(brand, model, color, year, maxSpeed, dailyRent);
            vehicles.addVehicle(bicycle);
            cout << "Bicycle added successfully." << endl;
            Sleep(1000);
            system("cls");
        }
        else if (choice == 4) {
            vehicles.displayVehicles();
        }
        else if (choice == 5) {
            int index;
            int transactionChoice;
            cout << "Enter index of vehicle (starting from 1): ";
            cin >> index;
            system("cls");
            Vehicle* v = vehicles.getVehicle(index);
            if (v) {
                cout << "Transaction type: (1: Sell, 2: Rent, 3: Return rental): ";
                cin >> transactionChoice;
                
                if (transactionChoice == 1) {
                    vehicles.requestTransaction(index, v->canSell(), 0,0); // فروش
                } 
                else if (transactionChoice == 2) {
                    int days;
                    cout << "Enter number of days to rent: ";
                    cin >> days;
                    vehicles.requestTransaction(index, 0, v->canRent(), days); // اجاره
                } 
                else if (transactionChoice == 3) { // برگشت وسیله نقلیه
                    Motorcycle* M = dynamic_cast<Motorcycle*>(v);
                    if(M){M->returnRental();}
                    else {
                        Bicycle* B = dynamic_cast<Bicycle*>(v);
                        if(B) {B->returnRental();}
                        else
                            cout << "Invalid transaction type!" << endl;
                    }
                } 
                else {
                    cout << "Invalid transaction type!" << endl;
                }
            } else {
                cout << "Invalid index." << endl;
            }
            Sleep(2000);
            system("cls");
        }
        else if (choice == 6) {
            cout << "Exiting the App. Goodbye!" << endl;
            Sleep(1000);
            system("cls");
            break;
        }
        else {
            cout << "Invalid option. Try again." << endl;
            Sleep(1000);
            system("cls");
        }
    }
    return 0;

    // LinkedList vehicle2;
    // Vehicle* h = new Car("BMW","M5","red",2025,40,300000);
    // Vehicle* d = new Motorcycle("Yamaha", "R1", "Blue",2015,20,15000,30);
    // Vehicle* r = new Bicycle("Giant", "Escape 3", "Black",2010,10,20);
    // vehicle2.addVehicle(h);
    // vehicle2.addVehicle(d);
    // vehicle2.addVehicle(r);
    // h->drive();
    // h->print();
    // vehicle2.checkVehicleHealth();
    // d->drive();
    // r->drive();
}
