// Cosmetics.h - Cosmetics Aisle Header File
// Author: David Espantoso
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef COSMETICS_H_
#define COSMETICS_H_

#include <iostream> // cin and cout
#include <string> // for the string class
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time

class Cosmetics
{
    friend class Store;

    private:
        const std::string name; // Item name
        const std::string brand; // Brand name
        double price; // store Price
        double quantity; // Quantity available in store
        void updatePrice(double newPrice); // Change the Price
        void decQuantity(double newQty); // Decrement the quantity

    public:
        Cosmetics(std::string name, std::string brand, double price);
        std::string getName();
        std::string getBrand();
        double getPrice();
        double getQuantity();
};

// CONSTRUCTOR
Cosmetics::Cosmetics (std::string name, std::string brand, double price):name(name), brand(brand){
  srand (time(0));
  this->price = price; // set Price
  this->quantity = rand() % 31 + 20; // Qty between 20 and 50 inclusive // U = 50, L = 20 // rand() % (1 + U - L) + L
}

// SETTERS
void Cosmetics::updatePrice(double newPrice){ // Change the Price per bag/box
	if (newPrice > 0){
		this->price = price;
	} else {
		std::cout << "Update failed. Cosmetics newPrice cannot be negative. " << std::endl;
	}
}

void Cosmetics::decQuantity(double newQty){ // After something is bought from store instance
	if (this->quantity >= newQty){
		this->quantity -= newQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string Cosmetics::getName(){
	return this->name;
}

std::string Cosmetics::getBrand(){
	return this->brand;
}

double Cosmetics::getPrice(){
	return this->price;
}

double Cosmetics::getQuantity(){
	return this->quantity;
}

#endif // COSMETICS_H_
