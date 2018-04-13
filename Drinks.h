#ifndef DRINKS_H
#define DRINKS_H

#include "Store.h"

class Drinks
{
    friend class Store;

    private:
        std::string name;
        const std::string aisle = "drinks";
        std::string type;
        double pricePerOz;
        double supermarketQuantity;

    public:
        Drinks(std::string name, std::string type, double pricePerOz);
        Drinks addDrinks(std::string name);
        std::string getName();
        std::string getType();
        std::string getAisle();
		double getPricePerOz();
};

Drinks::Drinks (std::string name, std::string type, double pricePerOz){
    this -> name = name;
    this -> type = type;
	this -> pricePerOz = pricePerOz;
	this -> supermarketQuantity = 100;
}

std::string Drinks::getName(){
	return this -> name;
}

std::string Drinks::getType(){
	return this-> type;
}

double Drinks::getPricePerOz(){
	return this -> pricePerOz;
}

std::string Drinks::getAisle(){
    return this -> aisle;
}

#endif // DRINKS_H
