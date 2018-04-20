// Dairy.h - Dairy Aisle Header File
// Author: Layiwola Ibukun
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef DAIRY_H_
#define DAIRY_H_

#include <iostream> // cin and cout
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time
#include <string> // for the string class

class Dairy // Dairy Products
{
	friend class Store;
		private:
			const std::string dairyName; // E.g. Milk, Yogurt, Eggs
			const std::string brandName; // President, Silk, Orville, Blue Diamond
			const int sizeFlOz; // size in Fluid Ounces
			double storePrice; // Price per bottle
			double quantity; // Number of bottles available in Store
			void updateStorePrice(double storePrice); // Change the Price per bottle
			void decQuantity(double soldQty); // Decrease the quantity

		public:
			// This creates an instance of the Dairy Product
			Dairy(std::string dairyName, std::string brandName, int sizeFlOz, double storePrice);
			std::string getDairyName(); // E.g. Milk, Yogurt, Eggs
			std::string getBrandName(); // President, Silk, Orville, Blue Diamond
			int getSizeFlOz(); // size in Fluid Ounces
			double getStorePrice(); // Price per bottle
			double getQuantity(); // Number of bags/boxes available in store
};

// CONSTRUCTOR
Dairy::Dairy(std::string dairyName, std::string brandName, int sizeFlOz, double storePrice):dairyName(dairyName), brandName(brandName), sizeFlOz(sizeFlOz){
	srand (time(0));
	this->storePrice = storePrice; // set Price per bag/box
	this->quantity = rand() % 26 + 15; // Qty between 15 and 40 inclusive // U = 40, L = 15, // rand() % (1 + U - L) + L
}

// SETTERS
void Dairy::updateStorePrice(double storePrice){ // Change the Price per bag/box
	if (storePrice > 0){
		this->storePrice = storePrice;
	} else {
		std::cout << "Update failed. Dairy StorePrice cannot be negative. " << std::endl;
	}
}

void Dairy::decQuantity(double soldQty){ // After something is bought from store instance
	if (this->quantity >= soldQty){
		this->quantity -= soldQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getQuantity() << " left in store." << std::endl;
	}
}

// GETTERS
std::string Dairy::getDairyName(){
	return this->dairyName;
}

std::string Dairy::getBrandName(){
	return this->brandName;
}

int Dairy::getSizeFlOz(){
	return this->sizeFlOz;
}

double Dairy::getStorePrice(){
	return this->storePrice;
}

double Dairy::getQuantity(){
	return this->quantity;
}

#endif // DAIRY_H_
