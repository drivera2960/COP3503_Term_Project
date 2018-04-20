// Drinks.h - Drinks Aisle Header File
// Author: Amanda Gonzalez
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef DRINKS_H_
#define DRINKS_H_

#include <iostream> // cin and cout
#include <string> // for the string class
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time

class Drinks
{
    friend class Store;

    private:
      const std::string name;
      const std::string category;
      double pricePerOz;
      double quantity;
      void updatePricePerOz(double newPrice); // Change the Price per ounce
      void decQuantity(double newQty); // Decrement the quantity in store

    public:
      Drinks(std::string name, std::string category, double pricePerOz);
      std::string getName();
      std::string getCategory();
      double getPricePerOz();
      double getQuantity();
};

// CONSTRUCTOR
Drinks::Drinks (std::string name, std::string category, double pricePerOz):name(name), category(category){
  srand (time(0));
  this->pricePerOz = pricePerOz;
  this->quantity = rand() % 51 + 50; // Qty between 50 and 100 inclusive // U = 100, L = 50, // rand() % (1 + U - L) + L
}

// SETTERS
void Drinks::updatePricePerOz(double newPrice){ // Change the Price per Oz
	if (newPrice > 0){
		this->pricePerOz = newPrice;
	} else {
		std::cout << "Update failed. Drinks UnitPrice cannot be negative. " << std::endl;
	}
}

void Drinks::decQuantity(double newQty){ // After something is bought from store instance
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string Drinks::getName(){
	return this->name;
}

std::string Drinks::getCategory(){
	return this->category;
}

double Drinks::getPricePerOz(){
	return this->pricePerOz;
}

double Drinks::getQuantity(){
	return this->quantity;
}

#endif // DRINKS_H_
