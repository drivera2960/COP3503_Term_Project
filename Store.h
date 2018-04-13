#ifndef STORE_H_
#define STORE_H_

#include "Produce.h"
#include "Meats.h"
<<<<<<< HEAD
#include "Items.h"
#include "Deli.h"
#include "Bakery.h"

=======
>>>>>>> 27bdb2d87531804c2e06ed47b0c08c382a84bde2

#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Store{
	private:
<<<<<<< HEAD
		vector <string>	allItemNames;
		vector <Produce> produceItems;
		vector <Meats> meatItems;
        vector <Deli> deliItems;
        vector <Bakery> bakeryItems;

		vector <Items> items;
=======
		std::vector <std::string>	allItemNames;	//just holds the names of all the items
		std::vector <Produce> produceItems;
		std::vector <Meats> meatItems;
>>>>>>> 27bdb2d87531804c2e06ed47b0c08c382a84bde2


	public:
		Store();
<<<<<<< HEAD
		void addProduce(string name, string type, double pricePerLlb);
		void addMeat(string name, string type, double pricePerLlb);
        void addDeli(string name, double pricePerLlb);
        void addBakery(string name, double pricePerBox);
=======
		void addProduce(std::string name, std::string type, double pricePerLlb);
		void addMeat(std::string name, std::string type, double pricePerLlb);
>>>>>>> 27bdb2d87531804c2e06ed47b0c08c382a84bde2
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

void Store::addDeli(string name, double pricePerLlb)
{
    deliItems.push_back(Deli(name, pricePerLlb)) ;
    allItemNames.push_back(name);
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
		std::cout<<meatItems.at(i).getName()<<endl;
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
		std::cout << "Type: " << meatItems.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $" <<meatItems.at(i).getPricePerLlb() << "\n" << "\n";
	}

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

}



#endif /* STORE_H_ */
