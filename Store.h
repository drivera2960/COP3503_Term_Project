#ifndef STORE_H_
#define STORE_H_
#include <iostream>
#include <string>
#include <vector>
#include "Produce.h"
#include "Meats.h"

using namespace std;

class Store{
	private:
		vector <Produce> produceItems;
		vector <Meats> meatItems;
	public:
		Store();
		void addProduce(string name, string section, string type, double pricePerLlb);
		void addMeat(string name, string section, string type, double pricePerLlb);
		void listProduce();
		void listMeats();
		void listVegetables();
		void listInfo();

};
Store::Store(){
}

void Store::addProduce(string name, string section, string type, double pricePerLlb){
	produceItems.push_back(Produce(name, section, type, pricePerLlb));

}

void Store::addMeat(string name, string section, string type, double pricePerLlb){
	meatItems.push_back(Meats(name, section, type, pricePerLlb));
}

void Store::listProduce(){
	for(int i = 0, max = produceItems.size(); i != max; ++i){
		if(produceItems.at(i).getType().compare("fruit") == 0)
			cout<<produceItems.at(i).getName()<<endl;
	}
}

void Store::listMeats(){
	for(int i = 0, max = meatItems.size(); i!=max; ++i)
		cout<<meatItems.at(i).getName()<<endl;
}

void Store::listVegetables(){
	for(int i = 0, max = produceItems.size(); i != max; ++i){
		if(produceItems.at(i).getType().compare("vegetable") == 0)
			cout<<produceItems.at(i).getName();
	}

}

void Store::listInfo(){
	cout<<"PRODUCE"<<endl;
	for(int i = 0, max = produceItems.size(); i != max; ++i){
		cout << produceItems.at(i).getName()<< "\n" << "\t" << "Section: " << produceItems.at(i).getSection() <<"\n" << "\t";
		cout << "Type: " << produceItems.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $"  << produceItems.at(i).getPricePerLlb() << "\n" << "\n";
	}

	cout<<endl;
	cout<<"MEATS"<<endl;
	for(int i = 0, max = meatItems.size(); i!=max; ++i){
		cout << meatItems.at(i).getName()<< "\n" << "\t" << "Section: " << meatItems.at(i).getSection() <<"\n" << "\t";
		cout << "Type: " << meatItems.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $" <<meatItems.at(i).getPricePerLlb() << "\n" << "\n";
	}
}


#endif /* STORE_H_ */
