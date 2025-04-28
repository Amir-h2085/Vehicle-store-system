#ifndef NODE_H
#define NODE_H
#include "Vehicle.h"

class Node{
public:
    Vehicle* vehicle;
    Node* next;
    Node(Vehicle*);
};

#endif