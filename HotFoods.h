// HotFoods.h - HotFoods Aisle Header File
// Author: Martin Lasprilla
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef HOTFOODS_H_
#define HOTFOODS_H_

#include <iostream> // cin and cout
#include <string> // for the string class
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time

class HotFoods
{
    friend class Store;

    private:
        const std::string name;
        double pricePerItem;
        double quantity;
        void updatePricePerItem(double newPrice); // Change the Price per item
        void decQuantity(double newQty); // Decrement the quantity in store

    public:
        HotFoods(std::string name, double pricePerItem);
        std::string getName();
        double getPricePerItem();
        double getQuantity();
};

// CONSTRUCTOR
HotFoods::HotFoods(std::string name, double pricePerItem):name(name){
  srand (time(0));
  this->pricePerItem = pricePerItem;
  this->quantity = rand() % 91 + 30; // Qty between 30 and 120 inclusive // U = 120, L = 30, // rand() % (1 + U - L) + L
}

// SETTERS
void HotFoods::updatePricePerItem(double newPrice){ // Change the Price per item
	if (newPrice > 0){
		this->pricePerItem = newPrice;
	} else {
		std::cout << "Update failed. HotFoods ItemPrice cannot be negative. " << std::endl;
	}
}

void HotFoods::decQuantity(double newQty){ // After something is bought from store instance
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string HotFoods::getName(){
    return this->name;
}

double HotFoods::getPricePerItem(){
    return this->pricePerItem;
}

double HotFoods::getQuantity(){
    return this->quantity;
}

#endif // HOTFOODS_H_
