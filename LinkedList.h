#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include "Sell.h"
#include "Rent.h"

class LinkedList{
private:
    Node* head;
public:
    LinkedList();
    void addVehicle(Vehicle*);
    void displayVehicles();
    void requestTransaction(int, bool, bool, int);
    void checkVehicleHealth() const;
    Vehicle* getVehicle(int); 
    ~LinkedList();

};

#endif