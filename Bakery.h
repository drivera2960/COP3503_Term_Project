// Bakery.h - Bakery Aisle Header File
// Author: Robert Garcia
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef BAKERY_H_
#define BAKERY_H_

#include <iostream> // cin and cout
#include <string> // for the string class
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time

class Bakery
{
    friend class Store;

    private:
      const std::string name; // Item name
      double pricePerBox; // the price per box
      double quantity; // Quantity in Store
      void updatePricePerBox(double newPrice); // Change the Price per box
      void decQuantity(double newQty); // Decrement the quantity in store

    public:
      Bakery(std::string name, double pricePerBox);
      std::string getName();
      double getPricePerBox();
      double getQuantity(); // Number available in store
};

// CONSTRUCTOR
Bakery::Bakery(std::string name, double pricePerBox):name(name){
    srand (time(0));
  	this->pricePerBox = pricePerBox; // set Price per box
  	this->quantity = rand() % 41 + 30; // Qty between 30 and 70 inclusive // U = 70, L = 30, // rand() % (1 + U - L) + L
}

// SETTERS
void Bakery::updatePricePerBox(double newPrice){ // Change the Price
	if (newPrice > 0){
		this->pricePerBox = newPrice;
	} else {
		std::cout << "Update failed. Bakery newPrice cannot be negative. " << std::endl;
	}
}

void Bakery::decQuantity(double newQty){ // After something is bought from store
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string Bakery::getName(){
    return this->name;
}

double Bakery::getPricePerBox(){
    return this->pricePerBox;
}

double Bakery::getQuantity(){
	return this->quantity;
}

#endif
