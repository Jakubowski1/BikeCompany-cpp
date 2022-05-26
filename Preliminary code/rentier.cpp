#include "rentier.h"
#include <iostream>

 void Rentier::printList(){
     /*displays the list of bikes with all parameters assigned to them. IT WILL DISPLAY ONLY 
     AVALIABLE BIKES */
 }
    void Rentier::AddBike(const Bike & x){
        //adds a bike to list and sorts it by it's id in ascending order
        //cin>> bikes id
        //if exists display error1
        //points to display menu
    }
    void Rentier::removeBike(const Bike & x){
        //removes the bike with given id from the list
        //comunicate that the bike has been removed
        //points to display menu
    }
    void Rentier::rentBike(const Bike & x){
        //takes ID of the wanted bike from the user
        //checks whether it is avaliable 
        //calls addCustomer()
        //calls acessibility()
        //calls assignBike()
        //calls displayMenu()
    }
    void Rentier::turnInBike(const Bike & x){
        //checks whether the bike is new or just rented. If rented calls  //calls acessibility()
        //Otherwise does nothing
        //calls displayMenu()
    }