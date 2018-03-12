#ifndef PRODUCE_H_
#define PRODUCE_H_

#include "Store.h"

using namespace std;

class Produce{
	friend class Product;
		private:
			const string name;
			const string section;
			const string type;
			double pricePerLlb;
			double supermarketQuantity;

		public:
			Produce(string name, string section, string type, double pricePerLlb);
			string getType();
			Produce addProduce(string anme, string section);
			string getSection();
			string getName();
			double getPricePerLlb();

};
Produce::Produce(string name, string section, string type, double pricePerLlb):name(name),section(section), type(type){
	this -> pricePerLlb = pricePerLlb;
	this -> supermarketQuantity = 100;
}

string Produce::getSection(){
	return this->section;
}
string Produce::getName(){
	return this -> name;
}

string Produce::getType(){
	return this-> type;
}

double Produce::getPricePerLlb(){
	return this -> pricePerLlb;
}

#endif /* PRODUCE_H_ */
