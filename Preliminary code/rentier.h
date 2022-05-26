#include <string>
#include <vector>
#include "Bike.h"
#pragma once
class Rentier{
    std::vector<Bike> bikeList;

    public:
    void printList();
    void AddBike(const Bike & x);
    void removeBike(const Bike & x);
    void rentBike(const Bike & x);
    void turnInBike(const Bike & x);
};