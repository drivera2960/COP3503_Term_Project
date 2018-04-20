// Hygiene.h - Hygiene Aisle Header File
// Author: Jayme Garces
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef HYGIENE_H_
#define HYGIENE_H_

#include <iostream> // cin and cout
#include <string> // for the string class
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time

class Hygiene
{
    friend class Store;

    private:
        const std::string name;
        double pricePerUnit;
        double quantity;
        void updatePricePerUnit(double newPrice); // Change the Price per Unit
        void decQuantity(double newQty); // Decrement the quantity in store

    public:
        Hygiene(std::string name, double pricePerUnit);
        std::string getName();
        double getPricePerUnit();
        double getQuantity();

};

// CONSTRUCTOR
Hygiene::Hygiene(std::string name, double pricePerUnit):name(name){
  srand (time(0));
  this->pricePerUnit = pricePerUnit;
  this->quantity = rand() % 41 + 60; // Qty between 60 and 100 inclusive // U = 100, L = 60, // rand() % (1 + U - L) + L
}

// SETTERS
void Hygiene::updatePricePerUnit(double newPrice){ // Change the Price per unit
	if (newPrice > 0){
		this->pricePerUnit = newPrice;
	} else {
		std::cout << "Update failed. Hygiene pricePerUnit cannot be negative. " << std::endl;
	}
}

void Hygiene::decQuantity(double newQty){ // After something is bought from store instance
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string Hygiene::getName(){
    return this->name;
}

double Hygiene::getPricePerUnit(){
    return this->pricePerUnit;
}

double Hygiene::getQuantity(){
    return this->quantity;
}

#endif // HYGIENE_H_
