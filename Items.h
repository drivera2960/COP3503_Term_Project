/*
 * Items.h
 *
 *  Created on: Mar 13, 2018
 *      Author: User
 */

#ifndef ITEMS_H_
#define ITEMS_H_

#include "Store.h"

class Items{
	friend class Store;
		private:
			const string name;
			const string section;
			const string type;
			const string servingSize;
			double pricePerLlb;
			double pricePerUnit;
			double supermarketQuantity;
		public:
			Items(string name, string section, string type, double pricePerLlb);
			Items(string name, string section, string type, string servingSize, double pricePerUnit);
			string getName();
			string getType();
			string getSection();
			double getPricePerLlb();
			double getPricePerUnit();
			string getServingSize();
};
Items::Items(string name, string section, string type, double pricePerLlb):name(name), section(section), type(type){
	this -> pricePerUnit = 0;
	this -> pricePerLlb = pricePerLlb;
	this -> supermarketQuantity = 100;
}
Items::Items(string name, string section, string type, string servingSize, double pricePerUnit):name(name), section(section), type(type), servingSize(servingSize){
	this -> pricePerLlb = 0;
	this -> pricePerUnit = pricePerUnit;
	this -> supermarketQuantity = 100;
}

string Items::getName(){
	return this -> name;
}

string Items::getType(){
	return this-> type;
}

string Items::getSection(){
	return this -> section;
}

string Items::getServingSize(){
	return this -> servingSize;
}

double Items::getPricePerLlb(){
	return this -> pricePerLlb;
}

double Items::getPricePerUnit(){
	return this -> pricePerUnit;
}


#endif /* ITEMS_H_ */
