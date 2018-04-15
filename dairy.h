// dairy.h - Dairy Aisle Header File
// Author: Layiwola Ibukun
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef DAIRY_H_
#define DAIRY_H_

#include "Store.h" // a friend class
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time
#include <string>

class Dairy // Dairy Products
{
	friend class Store;
		private:
			const std::string dairyName; // E.g. Milk, Yogurt, Eggs
			const std::string brandName; // President, Silk, Orville, Blue Diamond
			const int sizeFlOz; // size in Fluid Ounces
			double storePrice; // Price per bottle
			int storeQty; // How many bags/boxes are available in store?
			void updateStorePrice(double newPrice); // Change the Price per bag/box
			void updateStoreQty(int newQty); // After something is bought from store instance

		public:
			// This creates an instance of the Dairy Product
			Dairy(std::string dairyName, std::string brandName, int sizeFlOz, double storePrice);
		//	Dairy(std::string dairyName, std::string brandName, int sizeFlOz, double storePrice, int storeQty);

			std::string getDairyName(); // E.g. Milk, Yogurt, Eggs
			std::string getBrandName(); // President, Silk, Orville, Blue Diamond
			int getSizeFlOz(); // size in Fluid Ounces
			double getStorePrice(); // Price per bottle
			int getStoreQty(); // Number of bags/boxes available in store
};

Dairy::Dairy(std::string dairyName, std::string brandName, int sizeFlOz, double storePrice):dairyName(dairyName), brandName(brandName), sizeFlOz(sizeFlOz){
	srand (time(0));
	this->storePrice = storePrice; // set Price per bag/box
	this->storeQty = rand() % 26 + 15; // Qty between 15 and 40 inclusive
}

// SETTERS
void Dairy::updateStorePrice(double storePrice){ // Change the Price per bag/box
	if (storePrice > 0){
		this->storePrice = storePrice;
	} else {
		std::cout << "Update failed. Dairy StorePrice cannot be negative. " << std::endl;
	}
}

void Dairy::updateStoreQty(int soldQty){ // After something is bought from store instance
	if (this->storeQty >= soldQty){
		this->storeQty -= soldQty;
	} else {
		std::cout << "Purchase cannot be made. There are only " << getStoreQty() << " left in store." << std::endl;
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

int Dairy::getStoreQty(){
	return this->storeQty;
}

#endif /* DAIRY_H_ */
