// Deli.h - Deli Aisle Header File
// Author: Robert Garcia
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef DELI_H_
#define DELI_H_

#include <iostream> // cin and cout
#include <string> // for the string class
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time

class Deli
{
  friend class Store;

  private:
    const std::string name; // Item name
    double pricePerLlb; // the price per pound
    double pricePerUnit; // the price per unit
    double quantity; // Quantity in store
    void updatePricePerLlb(double newPrice); // Change the Price per pound
    void updatePricePerUnit(double newPrice); // Change the Price per unit
    void decQuantity(double newQty); // Decrement the quantity in store

  public:
    Deli(std::string name, double pricePerLlb, double pricePerUnit);
    std::string getName();
    double getPricePerLlb();
    double getPricePerUnit();
    double getQuantity();

};

// CONSTRUCTOR
Deli::Deli(std::string name, double pricePerLlb, double PricePerUnit):name(name){
    srand (time(0));
    this->pricePerUnit = pricePerUnit;
    this->pricePerLlb = pricePerLlb;
  	this->quantity = rand() % 201 + 700; // Qty between 700 and 900 inclusive // U = 900, L = 700, // rand() % (1 + U - L) + L
}

// SETTERS
void Deli::updatePricePerLlb(double newPrice){ // Change the Price per pound
	if (newPrice > 0){
		this->pricePerLlb = newPrice;
	} else {
		std::cout << "Update failed. Deli LlbPrice cannot be negative. " << std::endl;
	}
}

void Deli::updatePricePerUnit(double newPrice){ // Change the Price per unit
	if (newPrice > 0){
		this->pricePerUnit = newPrice;
	} else {
		std::cout << "Update failed. Deli UnitPrice cannot be negative. " << std::endl;
	}
}

void Deli::decQuantity(double newQty){ // After something is bought from store instance
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string Deli::getName(){
    return this->name;
}

double Deli::getPricePerLlb(){
    return this->pricePerLlb;
}

double Deli::getPricePerUnit(){
    return this->pricePerUnit;
}

double Deli::getQuantity(){
    return this->quantity;
}

#endif // DELI_H_
