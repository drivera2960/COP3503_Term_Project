// Meats.h - Meats Aisle Header File
// Author: David Rivera
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef MEATS_H_
#define MEATS_H_

#include <iostream> // cin and cout
#include <string> // for the string class
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time

class Meats
{
		friend class Store;

		private:
			const std::string name;
			const std::string type;
			double pricePerLlb;
			double quantity;
			void updatePricePerLlb(double newPrice); // Change the Price per item
      void decQuantity(double newQty); // Decrement the quantity in store

		public:
			Meats(std::string name, std::string type, double pricePerLlb);
			std::string getName();
			std::string getType();
			double getPricePerLlb();
			double getQuantity();
};

// CONSTRUCTOR
Meats::Meats(std::string name, std::string type, double pricePerLlb):name(name), type(type){
	srand (time(0));
	this->pricePerLlb = pricePerLlb;
	this->quantity = rand() % 31 + 80; // Qty between 80 and 110 inclusive // U = 110, L = 80, // rand() % (1 + U - L) + L
}

// SETTERS
void Meats::updatePricePerLlb(double newPrice){ // Change the Price per item
	if (newPrice > 0){
		this->pricePerLlb = newPrice;
	} else {
		std::cout << "Update failed. Meats LlbPrice cannot be negative. " << std::endl;
	}
}

void Meats::decQuantity(double newQty){ // After something is bought from store instance
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string Meats::getName(){
	return this->name;
}

std::string Meats::getType(){
	return this->type;
}

double Meats::getPricePerLlb(){
	return this->pricePerLlb;
}

double Meats::getQuantity(){
    return this->quantity;
}

#endif // MEATS_H_
