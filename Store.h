#ifndef STORE_H_
#define STORE_H_

#include "Produce.h"
#include "Meats.h"
<<<<<<< HEAD
<<<<<<< HEAD
#include "Items.h"
<<<<<<< HEAD
#include "Deli.h"
#include "Bakery.h"
=======
#include "Pharmacy.h"
#include "Snacks.h"
>>>>>>> David

=======
>>>>>>> 27bdb2d87531804c2e06ed47b0c08c382a84bde2
=======
>>>>>>> origin/Dave

#include <string>
#include <vector>
#include <iomanip>

class Store{
	private:
		std::vector <std::string> allItemNames;	//just holds the names of all the items
		std::vector <Produce> produceItems;
		std::vector <Meats> meatItems;
<<<<<<< HEAD
>>>>>>> 27bdb2d87531804c2e06ed47b0c08c382a84bde2

        vector <Pharmacy> pharmacyItems;
        vector <Snacks> snackItems;

	public:
		Store();
<<<<<<< HEAD
		void addProduce(string name, string type, double pricePerLlb);
		void addMeat(string name, string type, double pricePerLlb);
<<<<<<< HEAD
        void addDeli(string name, double pricePerLlb);
        void addBakery(string name, double pricePerBox);
=======
		void addProduce(std::string name, std::string type, double pricePerLlb);
		void addMeat(std::string name, std::string type, double pricePerLlb);
>>>>>>> 27bdb2d87531804c2e06ed47b0c08c382a84bde2
=======
        void addDrug(string name, double pricePerCapsules, double supermarketQuantity);
        void addSnacks(string name, double pricePerAmount, double supermarketQuantity);
>>>>>>> David
=======

	public:
		Store();
		void addProduce(std::string name, std::string type, double pricePerLlb);
		void addMeat(std::string name, std::string type, double pricePerLlb);
>>>>>>> origin/Dave
		void listFruit();
		void listMeats();
		void listVegetables();
		void listInfo();
		bool getAllItemNames();
		void addItems(std::string name, std::string section, std::string type, double pricePerLlb);
		void addItemsExtended(std::string name, std::string section, std::string type, std::string forWho, double pricePerLlb);

		void listItemsNames();
		void listInfoItems();
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

<<<<<<< HEAD
<<<<<<< HEAD
void Store::addDeli(string name, double pricePerLlb)
{
    deliItems.push_back(Deli(name, pricePerLlb)) ;
    allItemNames.push_back(name);
=======
void Store::addDrug(string name, double pricePerCapsules, double supermarketQuantity) {
    pharmacyItems.push_back(Pharmacy(name, pricePerCapsules, supermarketQuantity));
    allItemNames.push_back(name);
}

void Store::addSnacks(string name, double pricePerAmount, double supermarketQuantity) {
    snackItems.push_back(Snacks(name,pricePerAmount, supermarketQuantity));
}

void Store::addItems(string name, string section, string type, double pricePerLlb){
	items.push_back(Items(name, section, type, pricePerLlb));
	allItemNames.push_back(name);
}
void Store::addItemsExtended(string name, string section, string type, string servingSize, double pricePerUnit){
	items.push_back(Items(name, section, type, servingSize, pricePerUnit));
>>>>>>> David
}

void Store::addBakery(string name, double pricePerBox)
{
    bakeryItems.push_back(Bakery(name, pricePerBox));
    allItemNames.push_back(name);
}
=======
>>>>>>> origin/Dave



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

=======

    cout<<endl;
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

void Store::listInfoItems(){
	cout<<"PRODUCE"<<endl;
		for(int i = 0, max = items.size(); i != max; ++i){
			if(items.at(i).getSection().compare("produce") == 0){
				cout << items.at(i).getName()<< "\n" << "\t" << "Section: produce" <<"\n" << "\t";
				cout << "Type: " << items.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $"  << items.at(i).getPricePerLlb() << "\n" << "\n";
			}
		}

		cout<<endl;
		cout<<"MEATS"<<endl;

		for(int i = 0, max = items.size(); i != max; ++i){
				if(items.at(i).getSection().compare("meat") == 0){
					cout << items.at(i).getName()<< "\n" << "\t" << "Section: meat" <<"\n" << "\t";
					cout << "Type: " << items.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $"  << items.at(i).getPricePerLlb() << "\n" << "\n";
				}
		}

		cout<<endl;
		cout<<"SNACKS"<<endl;

				for(int i = 0, max = items.size(); i != max; ++i){
						if(items.at(i).getServingSize().compare("family") == 0){
							cout << items.at(i).getName()<< "\n" << "\t" << "Section: snacks" <<"\n" << "\t";
							cout << "Type: " << items.at(i).getType() << "\n" <<"\t" << "Price_per_unit: $"  << items.at(i).getPricePerUnit() << "\n" << "\t";
							cout << "Serving Size: "<< items.at(i).getServingSize()  << "\n" << "\n";
						}
				}
>>>>>>> David
=======
>>>>>>> origin/Dave
}


#endif /* STORE_H_ */
