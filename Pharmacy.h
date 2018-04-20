// Pharmacy.h - Pharmacy Aisle Header File
// Author: David Espantoso
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef PHARMACY_H_
#define PHARMACY_H_

#include <iostream> // cin and cout
#include <string> // for the string class

class Pharmacy
{
    friend class Store;

    private:
        const std::string name;
        double pricePerCapsules;
        double quantity;
        void updatePricePerCapsules(double newPrice); // Change the Price per item
        void decQuantity(double newQty); // Decrement the quantity in store

    public:
        Pharmacy(std::string name, double pricePerCapsules, double quantity);
        std::string getName();
        double getPricePerCapsules();
        double getQuantity();
};

// CONSTRUCTOR
Pharmacy::Pharmacy(std::string name, double pricePerCapsules, double quantity):name(name){
    srand (time(0));
  	this->pricePerCapsules = pricePerCapsules;
  	this->quantity = quantity;
}

// SETTERS
void Pharmacy::updatePricePerCapsules(double newPrice){ // Change the Price per item
	if (newPrice > 0){
		this->pricePerCapsules = newPrice;
	} else {
		std::cout << "Update failed. Pharmacy CapsulesPrice cannot be negative. " << std::endl;
	}
}

void Pharmacy::decQuantity(double newQty){ // After something is bought from store instance
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string Pharmacy::getName(){
    return this->name;
}

double Pharmacy::getPricePerCapsules(){
    return this->pricePerCapsules;
}

double Pharmacy::getQuantity(){
    return this->quantity;
}

#endif // PHARMACY_H_
