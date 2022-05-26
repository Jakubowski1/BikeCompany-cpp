#include <string>
#pragma once
class Bike{
    int id; //for each bike separate id 
    std::string type; 
    bool isAvaliable;
    int numberOfShifts;
    int pricePerDay;
public:
Bike(int _id,std::string _type,bool _isAvaliable, int _numberOfShifts, int _pricePerDay);

bool acessibility();
int priceCalculator();
void print();
int returnID();
int returnPrice();
int returnNumOfShifts();
int returnIsAvaliable();
std::string returnType();
};