#ifndef MEATS_H_
#define MEATS_H_

#include "Store.h"

using namespace std;

class Meats{
	friend class Store;
		private:
			string name;
			string section;
			string type;
			double pricePerLlb;
			double supermarketQuantity;

		public:
			Meats(string name, string section, string type, double pricePerLlb);
			void addMeat(string anme, string section);
			string getSection();
			string getName();
			string getType();
			double getPricePerLlb();

};
Meats::Meats(string name, string section, string type, double pricePerLlb){
	this -> name = name;
	this -> section = section;
	this -> type = type;
	this -> pricePerLlb = pricePerLlb;
	this -> supermarketQuantity = 100;
}

string Meats::getSection(){
	return this->section;
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
