// HomeGoods.h - HomeGoods Aisle Header File
// Author: Jayme Garces
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef HOMEGOODS_H_
#define HOMEGOODS_H_

#include <iostream> // cin and cout
#include <string> // for the string class
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time

class HomeGoods
{
    friend class Store;

    private:
      const std::string name;
      const double unitsPerPack;
      double pricePerPack;
      double quantity;
      void updatePricePerPack(double newPrice); // Change the Price per pack
      void decQuantity(double newQty); // Decrement the quantity in store

    public:
      HomeGoods(std::string name, double unitsPerPack, double pricePerPack);
      std::string getName();
      double getUnitsPerPack();
      double getPricePerPack();
      double getQuantity();
};

// CONSTRUCTOR
HomeGoods::HomeGoods(std::string name, double unitsPerPack, double pricePerPack):name(name), unitsPerPack(unitsPerPack){
  srand (time(0));
  this->pricePerPack = pricePerPack;
  this->quantity = rand() % 71 + 70; // Qty between 70 and 140 inclusive // U = 140, L = 70, // rand() % (1 + U - L) + L
}

// SETTERS
void HomeGoods::updatePricePerPack(double newPrice){ // Change the Price per pack
	if (newPrice > 0){
		this->pricePerPack = newPrice;
	} else {
		std::cout << "Update failed. HomeGoods pricePerPack cannot be negative. " << std::endl;
	}
}

void HomeGoods::decQuantity(double newQty){ // After something is bought from store instance
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string HomeGoods::getName(){
    return this->name;
}

double HomeGoods::getPricePerPack(){
    return this->pricePerPack;
}

double HomeGoods::getUnitsPerPack(){
    return this->unitsPerPack;
}

double HomeGoods::getQuantity(){
    return this->quantity;
}

#endif // HOMEGOODS_H_
