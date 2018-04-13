#ifndef MEATS_H_
#define MEATS_H_

#include <string>
#include <vector>
#include <iomanip>

#include "Store.h"

using namespace std;

class Meats{
	friend class Store;
		private:
			const string name;
			const string type;
			double pricePerLlb;
			double supermarketQuantity;

		public:
			Meats(string name, string type, double pricePerLlb);
			void addMeat(string anme, string section);
			string getName();
			string getType();
			double getPricePerLlb();

};
Meats::Meats(string name, string type, double pricePerLlb):name(name), type(type){
	this -> pricePerLlb = pricePerLlb;
	this -> supermarketQuantity = 100;
}

string Meats::getName(){
	return this -> name;
}

string Meats::getType(){
	return this-> type;
}

double Meats::getPricePerLlb(){
	return this -> pricePerLlb;
}

#endif /* MEATS_H_ */
