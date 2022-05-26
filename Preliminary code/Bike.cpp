#include "Bike.h"
#include <string>
#include <iostream>

Bike::Bike(int _id,std::string _type,bool _isAvaliable, int _numberOfShifts, int _pricePerDay)
{
//creates a object
}

bool Bike::acessibility(){
    //changes the bike's "isAvaliable"
}
int Bike::priceCalculator(){
    //calculates the price for each client
    
}
void Bike::print(){
    //prints all the informations assigned to particular bike
}
int Bike::returnID(){
    return id;
}
int Bike::returnPrice(){
    return pricePerDay;
}
int Bike::returnNumOfShifts(){
    return numberOfShifts;
}
int Bike::returnIsAvaliable(){
    return  isAvaliable;
}
std::string Bike:: returnType(){
    return type;
}