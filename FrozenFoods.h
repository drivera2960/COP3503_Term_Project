// FrozenFoods.h - FrozenFoods Aisle Header File
// Author: Martin Lasprilla
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef FROZENFOODS_H_
#define FROZENFOODS_H_

#include <iostream> // cin and cout
#include <string> // for the string class
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time

class FrozenFoods
{
    friend class Store;

    private:
      const std::string name;
      double pricePerItem;
      double quantity;
      void updatePricePerItem(double newPrice); // Change the Price per item
      void decQuantity(double newQty); // Decrement the quantity in store

    public:
      FrozenFoods(std::string name, double pricePerItem);
      std::string getName();
      double getPricePerItem();
      double getQuantity();
};

// CONSTRUCTOR
FrozenFoods::FrozenFoods(std::string name, double pricePerItem):name(name){
  srand (time(0));
  this->pricePerItem = pricePerItem;
  this->quantity = rand() % 81 + 40; // Qty between 40 and 120 inclusive // U = 120, L = 40, // rand() % (1 + U - L) + L
}

// SETTERS
void FrozenFoods::updatePricePerItem(double newPrice){ // Change the Price per item
	if (newPrice > 0){
		this->pricePerItem = newPrice;
	} else {
		std::cout << "Update failed. FrozenFoods ItemPrice cannot be negative. " << std::endl;
	}
}

void FrozenFoods::decQuantity(double newQty){ // After something is bought from store instance
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string FrozenFoods::getName(){
    return this->name;
}

double FrozenFoods::getPricePerItem(){
    return this->pricePerItem;
}

double FrozenFoods::getQuantity(){
    return this->quantity;
}

#endif // FROZENFOODS_H_
