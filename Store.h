#ifndef STORE_H_
#define STORE_H_

#include "Produce.h"
#include "Meats.h"
#include "Items.h"
#include "Deli.h"
#include "Bakery.h"


using namespace std;

//NOTE THE DIFFERENCE BETWEEN <listInfo> and <listInfoItems> methods

class Store{
	private:
		vector <string>	allItemNames;
		vector <Produce> produceItems;
		vector <Meats> meatItems;
        vector <Deli> deliItems;
        vector <Bakery> bakeryItems;

		vector <Items> items;


	public:
		Store();
		void addProduce(string name, string type, double pricePerLlb);
		void addMeat(string name, string type, double pricePerLlb);
        void addDeli(string name, double pricePerLlb);
        void addBakery(string name, double pricePerBox);
		void listFruit();
		void listMeats();
		void listVegetables();
		void listInfo();
		bool getAllItemNames();
		void addItems(string name, string section, string type, double pricePerLlb);
		void addItemsExtended(string name, string section, string type, string forWho, double pricePerLlb);

		void listItemsNames();
		void listInfoItems();
};
Store::Store(){
}

void Store::addProduce(string name, string type, double pricePerLlb){
	produceItems.push_back(Produce(name, type, pricePerLlb));
	allItemNames.push_back(name);
}

void Store::addMeat(string name, string type, double pricePerLlb){
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

void Store::addItems(string name, string section, string type, double pricePerLlb){
	items.push_back(Items(name, section, type, pricePerLlb));
	allItemNames.push_back(name);
}
void Store::addItemsExtended(string name, string section, string type, string servingSize, double pricePerUnit){
	items.push_back(Items(name, section, type, servingSize, pricePerUnit));
}

void Store::listItemsNames(){
	for(int i = 0, max = items.size(); i!=max; ++i)
			cout<< items.at(i).getName()<<endl;
}

void Store::listFruit(){
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
		cout << produceItems.at(i).getName()<< "\n" << "\t" << "Section: produce" <<"\n" << "\t";
		cout << "Type: " << produceItems.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $"  << produceItems.at(i).getPricePerLlb() << "\n" << "\n";
	}

	cout<<endl;
	cout<<"MEATS"<<endl;
	for(int i = 0, max = meatItems.size(); i!=max; ++i){
		cout << meatItems.at(i).getName()<< "\n" << "\t" << "Section: meat" << "\n" << "\t";
		cout << "Type: " << meatItems.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $" <<meatItems.at(i).getPricePerLlb() << "\n" << "\n";
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
		cout<<"Snacks"<<endl;

				for(int i = 0, max = items.size(); i != max; ++i){
						if(items.at(i).getServingSize().compare("family") == 0){
							cout << items.at(i).getName()<< "\n" << "\t" << "Section: snacks" <<"\n" << "\t";
							cout << "Type: " << items.at(i).getType() << "\n" <<"\t" << "Price_per_unit: $"  << items.at(i).getPricePerUnit() << "\n" << "\t";
							cout << "Serving Size: "<< items.at(i).getServingSize()  << "\n" << "\n";
						}
				}
}



#endif /* STORE_H_ */
