#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() : head(nullptr){}

void LinkedList::addVehicle(Vehicle* vehicle){
    Node* newNode = new Node(vehicle);
    if(!head){
        head = newNode;
    } else {
        Node* temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void LinkedList::displayVehicles(){
    Node* curr = head;
    int index = 1;
    cout << endl;
    while (curr) {
        cout << index << "- ";
        curr->vehicle->print();
        curr = curr->next;
        index++;
    }
}
void LinkedList::requestTransaction(int index, bool isSale, bool isRent, int days = 0){
    Node* curr = head;
    Node* befor = nullptr;
    int counter = 1;
    while(curr){
        if(index == counter){
            if(isSale){
                Sell* Sellable = dynamic_cast<Sell*>(curr->vehicle);
                if(Sellable){
                    Sellable->sell();
                    if(befor)
                        befor->next = curr->next;
                    else 
                        head = curr->next;
                    delete curr->vehicle;
                    delete curr;
                } else {
                    cout << "This vehicle cannot be sold!" << endl;
                }
            } else if (isRent){
                Rent* Rentable = dynamic_cast<Rent*>(curr->vehicle);
                if(Rentable){
                    Rentable->rent(days);
                } else {
                    cout << "This vehicle cannot be rented!" << endl;
                }
            } else {
                cout << "Invalid transaction type!" << endl;
            }
            return;
        }
        befor = curr;
        curr = curr->next;
        counter++;
    }
    cout << "Vehicle with index " << index << " not found!" << endl;
}

void LinkedList::checkVehicleHealth() const{
    Node* curr = head;
    while(curr){
        curr->vehicle->drive();
        curr = curr->next;
    }
}

Vehicle* LinkedList::getVehicle(int index) {
    Node* curr = head;
    int count = 1;
    while (curr) {
        if (count == index) return curr->vehicle;
        curr = curr->next;
        count++;
    }
    return nullptr;
}

LinkedList::~LinkedList() {
    Node* curr = head;
    while (curr) {
        Node* temp = curr;
        curr = curr->next;
        delete temp->vehicle;
        delete temp;
    }
}