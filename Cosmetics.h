#ifndef COSMETICS_H_INCLUDED
#define COSMETICS_H_INCLUDED

#include <string>
#include "Store.h"


class Cosmetics {

    friend class Store;

    private:
        std::string name;
        const std::string aisle = "cosmetics";
        std::string brand;
        double price;
        double supermarketQuantity;

    public:
        Cosmetics(std::string name, std::string brand, double price);
        void addCosmetics(std::string name);
        std::string getName();
        std::string getBrand();
        std::string getAisle();
		double getPrice();
};

Cosmetics::Cosmetics (std::string name, std::string brand, double price){
	this -> price = price;
	this -> brand = brand;
	this -> name = name;
	this -> supermarketQuantity = 100;
}

std::string Cosmetics::getName(){
	return this -> name;
}

std::string Cosmetics::getBrand(){
	return this-> brand;
}
std::string Cosmetics::getAisle(){
    return this -> aisle;
}

double Cosmetics::getPrice(){
	return this -> price;
}


#endif // COSMETICS_H_INCLUDED
