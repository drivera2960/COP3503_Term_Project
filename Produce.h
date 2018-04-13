#ifndef PRODUCE_H_
#define PRODUCE_H_

#include <string>
#include <vector>
#include <iomanip>

#include "Store.h"

using namespace std;

class Produce{
	friend class Store;
		private:
			const string name;
			const string type;
			double pricePerLlb;
			double supermarketQuantity;

		public:
			Produce(string name, string type, double pricePerLlb);
			string getType();
			Produce addProduce(string anme, string section);
			string getName();
			double getPricePerLlb();

};
Produce::Produce(string name, string type, double pricePerLlb):name(name), type(type){
	this -> pricePerLlb = pricePerLlb;
	this -> supermarketQuantity = 100;
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
