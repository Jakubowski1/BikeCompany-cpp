#include <string>
#include <vector>

#pragma once
class Customer{
    std::string nameAndSurname;
    int age;
    int bonusDiscountCount;
    bool Discount;
    int bikesID;
    std::vector<Customer> customersList;


    public:
    void addCustomer();
    int existanceCheck();
    Customer(std::string _nameAndSurname,int _age, int _bonusDiscountCount);
    int bonusAdd();
    bool Dicount();
    void printCustomer();
    void assignBike();
};