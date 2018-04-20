// Produce.h - Produce Aisle Header File
// Author: David Rivera
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef PRODUCE_H_
#define PRODUCE_H_

#include <iostream> // cin and cout
#include <string> // for the string class
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time

class Produce
{
		friend class Store;

		private:
			const std::string name;
			const std::string type;
			double pricePerLlb;
			double quantity;
			void updatePricePerLlb(double newPrice); // Change the Price per pound
      void decQuantity(double newQty); // Decrement the quantity in store

		public:
			Produce(std::string name, std::string type, double pricePerLlb);
			std::string getType();
			std::string getName();
			double getPricePerLlb();
			double getQuantity();
};

// CONSTRUCTOR
Produce::Produce(std::string name, std::string type, double pricePerLlb):name(name), type(type){
	srand (time(0));
	this->pricePerLlb = pricePerLlb;
	this->quantity = rand() % 51 + 70; // Qty between 70 and 120 inclusive // U = 120, L = 70, // rand() % (1 + U - L) + L
}

// SETTERS
void Produce::updatePricePerLlb(double newPrice){ // Change the Price per item
	if (newPrice > 0){
		this->pricePerLlb = newPrice;
	} else {
		std::cout << "Update failed. Produce LlbPrice cannot be negative. " << std::endl;
	}
}

void Produce::decQuantity(double newQty){ // After something is bought from store instance
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string Produce::getName(){
	return this->name;
}

std::string Produce::getType(){
	return this->type;
}

double Produce::getPricePerLlb(){
	return this->pricePerLlb;
}

double Produce::getQuantity(){
  return this->quantity;
}

#endif // PRODUCE_H_
