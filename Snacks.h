// Snacks.h - Snacks Aisle Header File
// Author: Amanda Gonzalez
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef SNACKS_H_
#define SNACKS_H_

#include <iostream> // cin and cout
#include <string> // for the string class

class Snacks
{
    friend class Store;

    private:
      const std::string name;
      double pricePerAmount;
      double quantity;
      void updatePricePerAmount(double newPrice); // Change the Price per amount
      void decQuantity(double newQty); // Decrement the quantity in store

    public:
      Snacks(std::string name, double pricePerAmount, double quantity);
      std::string getName();
      double getPricePerAmount();
      double getQuantity();
};

// CONSTRUCTOR
Snacks::Snacks(std::string name, double pricePerAmount, double quantity):name(name){
    this->pricePerAmount = pricePerAmount;
    this->quantity = quantity;
}

// SETTERS
void Snacks::updatePricePerAmount(double newPrice){ // Change the Price per item
	if (newPrice > 0){
		this->pricePerAmount = newPrice;
	} else {
		std::cout << "Update failed. Snacks AmountPrice cannot be negative. " << std::endl;
	}
}

void Snacks::decQuantity(double newQty){ // After something is bought from store instance
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string Snacks::getName(){
  return this->name;
}

double Snacks::getPricePerAmount(){
  return this->pricePerAmount;
}

double Snacks::getQuantity(){
  return this->quantity;
}

#endif // SNACKS_H_
