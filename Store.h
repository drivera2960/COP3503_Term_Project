#ifndef STORE_H_
#define STORE_H_

#include "Produce.h"
#include "Meats.h"
#include "Deli.h"
#include "Bakery.h"
#include "Pharmacy.h"
#include "Snacks.h"


#include <string>
#include <vector>
#include <iomanip>

class Store{
	private:
		std::vector <std::string> allItemNames;	//just holds the names of all the items
		std::vector <Produce> produceItems;
		std::vector <Meats> meatItems;

        std::vector <Pharmacy> pharmacyItems;
        std::vector <Snacks> snackItems;

	public:
		Store();
		void addProduce(std::string name, std::string type, double pricePerLlb);
		void addMeat(std::string name, std::string type, double pricePerLlb);
		void listFruit();
		void listMeats();
		void listVegetables();
		void listInfo();
		bool getAllItemNames();
		addDeli(std::string name, double pricePerLlb);
		addDeli(std::string name, double pricePerLlb);
		Store::addDrug(std::string name, double pricePerCapsules, double supermarketQuantity);
		addSnacks(std::string name, double pricePerAmount, double supermarketQuantity);
		addBakery(std::string name, double pricePerBox);


};
Store::Store(){
}

void Store::addProduce(std::string name, std::string type, double pricePerLlb){
	produceItems.push_back(Produce(name, type, pricePerLlb));
	allItemNames.push_back(name);
}

void Store::addMeat(std::string name, std::string type, double pricePerLlb){
	meatItems.push_back(Meats(name, type, pricePerLlb));
	allItemNames.push_back(name);
}

void Store::addDeli(string name, double pricePerLlb)
{
    deliItems.push_back(Deli(name, pricePerLlb)) ;
    allItemNames.push_back(name);
}
void Store::addDrug(string name, double pricePerCapsules, double supermarketQuantity) {
    pharmacyItems.push_back(Pharmacy(name, pricePerCapsules, supermarketQuantity));
    allItemNames.push_back(name);
}

void Store::addSnacks(string name, double pricePerAmount, double supermarketQuantity) {
    snackItems.push_back(Snacks(name,pricePerAmount, supermarketQuantity));
}


void Store::addBakery(string name, double pricePerBox)
{
    bakeryItems.push_back(Bakery(name, pricePerBox));
    allItemNames.push_back(name);
}


void Store::listFruit(){
	for(int i = 0, max = produceItems.size(); i != max; ++i){
		if(produceItems.at(i).getType().compare("fruit") == 0)
			std::cout<<produceItems.at(i).getName()<<std::endl;
	}
}

void Store::listMeats(){
	for(int i = 0, max = meatItems.size(); i!=max; ++i)
		std::cout<<meatItems.at(i).getName()<<std::endl;
}

void Store::listVegetables(){
	for(int i = 0, max = produceItems.size(); i != max; ++i){
		if(produceItems.at(i).getType().compare("vegetable") == 0)
			std::cout<<produceItems.at(i).getName();
	}
}

void Store::listInfo(){
	std::cout<<"PRODUCE"<<std::endl;
	for(int i = 0, max = produceItems.size(); i != max; ++i){
		std::cout << produceItems.at(i).getName()<< "\n" << "\t" << "Section: produce" <<"\n" << "\t";
		std::cout << "Type: " << produceItems.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $"  << produceItems.at(i).getPricePerLlb() << "\n" << "\n";
	}

	std::cout<<std::endl;
	std::cout<<"MEATS"<<std::endl;
	for(int i = 0, max = meatItems.size(); i!=max; ++i){
		std::cout << meatItems.at(i).getName()<< "\n" << "\t" << "Section: meat" << "\n" << "\t";
		std::cout << "Type: " << meatItems.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $" << meatItems.at(i).getPricePerLlb() << "\n" << "\n";
	}
<<<<<<< HEAD
<<<<<<< HEAD

    cout<<endl;
    cout<<"DELI ITEMS"<<endl;
    for(int k = 0; k < deliItems.size(); k++)
    {
        cout<<deliItems.at(k).getName()<< "\n" << "\t" << "Section: meat" << "\n" << "\t";
        cout <<"Price_per_llb: $" << deliItems.at(k).getPricePerLlb() << "\n" << "\n";
    }

    cout<<endl;
    cout<<"BAKERY ITEMS"<<endl;
    for(int k = 0; k < deliItems.size(); k++)
    {
        cout<<bakeryItems.at(k).getName()<< "\n" << "\t" << "Section: meat" << "\n" << "\t";
        cout <<"Price_per_llb: $" << bakeryItems.at(k).getPricePerBox() << "\n" << "\n";
    }


    cout<<"PHARMACY"<<endl;
    for(int i = 0, max = pharmacyItems.size(); i!= max; i++){
        cout<< pharmacyItems.at(i).getName()<< "\n" << "\t" << "Price_per_capsules: $" <<pharmacyItems.at(i).getPricePerCapsules() << "\n" << "\n";
    }

    cout<<endl;
    cout<<"SNACKS"<<endl;
    for(int i = 0, max = snackItems.size(); i != max; i++){
        cout << snackItems.at(i).getName() << "\n" << "Section: Snacks" << "\t" << "Price_per_amount: $" << snackItems.at(i).getPricePerAmount() << "\n" << "\n";
    }

}



#endif /* STORE_H_ */
