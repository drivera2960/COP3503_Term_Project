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
			double pricePerLlb;
			double supermarketQuantity;
		public:
			Items(string name, string section, string type, double pricePerLlb);
			string getName();
			string getType();
			string getSection();
			double getPricePerLlb();
};
Items::Items(string name, string section, string type, double pricePerLlb):name(name), section(section), type(type){
	this -> pricePerLlb = pricePerLlb;
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

double Items::getPricePerLlb(){
	return this -> pricePerLlb;
}

#endif /* ITEMS_H_ */
