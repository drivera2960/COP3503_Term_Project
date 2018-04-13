// grains.h - Grains Aisle Header File
// Author: Layiwola Ibukun
// COP3503 Final Project: Mr. Djald's Supermarket
// Due: Monday, April 23rd, 2018.

#ifndef GRAINS_H_
#define GRAINS_H_

#include <string> // string class
#include <iostream> // cout and cin
#include <stdlib.h>  // for random number generator //srand
#include <time.h> // for random number generator //time

using namespace std;

class Grains // Rice, Grains and Cereal
{
	friend class Store;
		private: 
			const string grainName; // E.g. Rice, Wheat, Beans,
      const string brandName; // White Rice, Brown Rice, Pinto Beans etc...
      const double sizeLbs; // bags in Pounds
      const bool organic; // Is it organic?
			const bool glutenFree; // Is it gluten free?
			double storePrice; // Price per bag/box
      int storeQty; // How many bags/boxes are available in store?
			void updateStorePrice(double newPrice); // Change the Price per bag/box
			void updateStoreQty(int newQty); // After something is bought from store instance

		public:
			// This creates an instance of the Grain Product
			Grains(string grainName, string brandName, double sizeLbs, bool organic, bool glutenFree, double storePrice);
			string getGrainName(); // E.g. Rice, Wheat, Beans,
			string getBrandName(); // White Rice, Brown Rice, Pinto Beans etc...
      double getSizeLbs(); // bags/boxes in Pounds
			bool getOrganic(); // Is it organic?
			bool getGlutenFree(); // Is it gluten free?
			double getStorePrice(); // Price per bag/box
			int getStoreQty(); // Number of bags/boxes available in store
};

Grains::Grains(string grainName, string brandName, double sizeLbs, bool organic, bool glutenFree, double storePrice):grainName(grainName), brandName(brandName), sizeLbs(sizeLbs), organic(organic), glutenFree(glutenFree){
	srand (time(0));
	this->storePrice = storePrice; // set Price per bag/box
	this->storeQty = rand() % 21 + 10; // Qty between 10 and 30 inclusive
}
// SETTERS
void Grains::updateStorePrice(double storePrice){ // Change the Price per bag/box
	if (storePrice > 0){
		this->storePrice = storePrice;
	} else {
		cout << "Update failed. StorePrice cannot be negative. " << endl;
	}
}

void Grains::updateStoreQty(int soldQty){ // After something is bought from store instance
	if (this->storeQty >= soldQty){
		this->storeQty -= soldQty;
	} else {
		cout << "Purchase cannot be made. There are only " << getStoreQty() << " left in store." << endl;
	}
}

// GETTERS
string Grains::getGrainName(){ // E.g. Rice, Wheat, Beans,
	return this->grainName;
}

string Grains::getBrandName(){ //E.g. "White" Rice, "Brown" Rice, "Pinto" Beans etc...
	return this->brandName;
}

double Grains::getSizeLbs(){ // size of one bag/box in Pounds
	return this->sizeLbs;
}

bool Grains::getOrganic(){ // Is it organic?
	return this->organic;
}

bool Grains::getGlutenFree(){ // Is it gluten free?
	return this->glutenFree;
}

double Grains::getStorePrice(){ // Price per bag/box
	return this->storePrice;
}

int Grains::getStoreQty(){ // Number of bags/boxes available in store
	return this->storeQty;
}

#endif /* GRAINS_H_ */
