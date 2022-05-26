#include "Customer.h"

Customer::Customer(std::string _nameAndSurname,int _age, int _bonusDiscountCount){
//creates a object customer
}
int Customer::bonusAdd(){
//counts how many times the customer has rented a bike. If it is 4 times it calls Discount(); and reset the points
}
bool Customer::Dicount(){
//switches customer's bool from 0 to 1. It will be used in file rentier.cpp in method rentBike() to provide a discount.
}
void Customer::printCustomer(){
//prints all customers information
}
void Customer::assignBike(){
    //assigns bikes id to current customer(my program allows only one bike per person)
}
void Customer::addCustomer(){
    //cin>> users data
    //checks if the customer is in the base
    //if customer is in the base calls bonusAdd()
    //otherwise adds new customer's profile to the list
    
}

int Customer::existanceCheck(){
    //checks if the customer is in the base
    //return 0 if not 
}