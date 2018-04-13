#ifndef MEATS_H_
#define MEATS_H_

#include <string>
#include <vector>
#include <iomanip>

#include "Store.h"

class Meats{
	friend class Store;
		private:
			const std::string name;
			const std::string type;
			double pricePerLlb;
			double supermarketQuantity;

		public:
			Meats(std::string name, std::string type, double pricePerLlb);
			void addMeat(std::string name, std::string section);
			std::string getName();
			std::string getType();
			double getPricePerLlb();

};
Meats::Meats(std::string name, std::string type, double pricePerLlb):name(name), type(type){
	this -> pricePerLlb = pricePerLlb;
	this -> supermarketQuantity = 100;
}

std::string Meats::getName(){
	return this -> name;
}

std::string Meats::getType(){
	return this-> type;
}

double Meats::getPricePerLlb(){
	return this -> pricePerLlb;
}

#endif /* MEATS_H_ */
