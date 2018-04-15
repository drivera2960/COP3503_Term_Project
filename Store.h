#ifndef STORE_H_
#define STORE_H_

#include "Produce.h"
#include "Meats.h"
#include "Deli.h"
#include "Bakery.h"
#include "Pharmacy.h"
#include "Snacks.h"
#include "HomeGoods.h"
#include "HotFoods.h"
#include "FrozenFoods.h"
#include "Hygiene.h"
#include "dairy.h"
#include "grains.h"
#include "Drinks.h"
#include "Cosmetics.h"

/*hygeine, homeGoods, bakery class, amount wasn't initialized in constructor
 *types should be set as const?
 *
 */
#include <string>
#include <vector>
#include <iomanip>

class Store{
	private:
		std::vector<Produce> produceItems;
		std::vector<Meats> meatItems;
		std::vector<Deli> deliItems;
		std::vector<Snacks> snackItems;
        	std::vector<Bakery> bakeryItems;
		std::vector<Pharmacy> pharmacyItems;
		std::vector<HotFoods> hotFoodItems;
		std::vector<HomeGoods> homeGoodItems;
		std::vector<FrozenFoods> frozenFoodItems;
<<<<<<< HEAD
		//std::vector<Hygiene>hygieneItems;
=======
		std::vector<Hygiene> hygieneItems;
		std::vector<Dairy> dairyItems;
		std::vector<Grains> grainItems;
		std::vector <Drinks> drinkItems;
		std::vector <Cosmetics> cosmeticItems;
>>>>>>> e688d2bd4a4a989d8a913c661c77048c25901743

	public:
		Store();
		void listFruit();
		void listMeats();
		void listVegetables();
		void listInfo();

		void addBakery(std::string name, double amount, double pricePerBox);
		void addDeli(std::string name, double pricePerLlb);
		void addFrozenFoods(std::string name, std::string type, double pricePerLlb);
		void addHomeGoods(std::string name,std::string type, double amount, double pricePerUnit);
		void addHotFoods(std::string name, std::string type, double pricePerItem, double supermarketQuantity);
		void addHygiene(std::string name, double amount, double pricePerBox);
		void addMeat(std::string name, std::string type, double pricePerLlb);
		void addPharmacy(std::string name, double pricePerCapsules, double supermarketQuantity);
		void addProduce(std::string name, std::string type, double pricePerLlb);
		void addSnacks(std::string name, double pricePerAmount, double supermarketQuantity);
<<<<<<< HEAD

=======
		void addGrain(string grainName, string brandName, int sizeLbs, bool organic, bool glutenFree, double storePrice);
		void addDairy(string dairyName, string brandName, int sizeFlOz, double storePrice);
        void addDrinks(std::string name, std::string type, double pricePerOz);
		void addCosmetics(std::string name, std::string brand, double price);
>>>>>>> e688d2bd4a4a989d8a913c661c77048c25901743
};

Store::Store(){
}

void Store::addProduce(std::string name, std::string type, double pricePerLlb)
{
	produceItems.push_back(Produce(name, type, pricePerLlb));
}

void Store::addMeat(std::string name, std::string type, double pricePerLlb)
{
	meatItems.push_back(Meats(name, type, pricePerLlb));
}

void Store::addDeli(std::string name, double pricePerLlb)
{
    deliItems.push_back(Deli(name, pricePerLlb)) ;
}

void Store::addPharmacy(std::string name, double pricePerCapsules, double supermarketQuantity)
{
    pharmacyItems.push_back(Pharmacy(name, pricePerCapsules, supermarketQuantity));
}

void Store::addSnacks(std::string name, double pricePerAmount, double supermarketQuantity)
{
    snackItems.push_back(Snacks(name,pricePerAmount, supermarketQuantity));
}

void Store::addBakery(std::string name, double amount, double pricePerBox)
{
    bakeryItems.push_back(Bakery(name, amount, pricePerBox));
}

void Store::addDrinks(std::string name, std::string type, double pricePerOz){
	drinkItems.push_back(Drinks(name, type, pricePerOz));
}

void Store::addCosmetics(std::string name, std::string brand, double price){
	cosmeticItems.push_back(Cosmetics(name, brand, price));
}

void Store::addGrain(string grainName, string brandName, int sizeLbs, bool organic, bool glutenFree, double storePrice){
	grainItems.push_back(Grains(grainName, brandName, sizeLbs, organic, glutenFree, storePrice));
	allItemNames.push_back(grainName);
}

void Store::addDairy(string dairyName, string brandName, int sizeFlOz, double storePrice){
	dairyItems.push_back(Dairy(dairyName, brandName, sizeFlOz, storePrice));
	allItemNames.push_back(dairyName);
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

void Store::listInfo()
{
	std::cout<<"PRODUCE"<<std::endl;
	for(int i = 0, max = produceItems.size(); i != max; ++i){
		std::cout << produceItems.at(i).getName()<< "\n" << "\t" << "Section: produce" <<"\n" << "\t";
		std::cout << "Type: " << produceItems.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $"  << produceItems.at(i).getPricePerLlb() << "\n" << "\n";
	}

	std::cout<<std::endl<<"MEATS"<<std::endl;
	for(int i = 0, max = meatItems.size(); i!=max; ++i){
		std::cout << meatItems.at(i).getName()<< "\n" << "\t" << "Section: meat" << "\n" << "\t";
		std::cout << "Type: " << meatItems.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $" << meatItems.at(i).getPricePerLlb() << "\n" << "\n";
	}

    std::cout<<std::endl<<"DELI ITEMS"<<std::endl;
    for(int k = 0, max = deliItems.size(); k!=max; ++k)
    {
        std::cout<<deliItems.at(k).getName()<< "\n" << "\t" << "Section: meat" << "\n" << "\t";
        std::cout <<"Price_per_llb: $" << deliItems.at(k).getPricePerLlb() << "\n" << "\n";
    }

    std::cout<<std::endl <<"BAKERY ITEMS"<<std::endl;
    for(int k = 0, max = bakeryItems.size(); k!=max; ++k)
    {
        std::cout<<bakeryItems.at(k).getName()<< "\n" << "\t" << "Section: bakery" << "\n" << "\t";
        std::cout << "Amount per package: "<< bakeryItems.at(k).getAmount()<<"\n\t" <<"Price per package: $" << bakeryItems.at(k).getPricePerBox() << "\n" << "\n";
    }


    std::cout<<"PHARMACY"<<std::endl;
    for(int i = 0, max = pharmacyItems.size(); i!= max; i++){
        std::cout<< pharmacyItems.at(i).getName()<< "\n" << "\t" << "Price_per_capsules: $" <<pharmacyItems.at(i).getPricePerCapsules() << "\n" << "\n";
    }


    std::cout<<std::endl<<"SNACKS"<<std::endl;
    for(int i = 0, max = snackItems.size(); i != max; i++){
        std::cout << snackItems.at(i).getName() << "\n" << "Section: Snacks" << "\t" << "Price_per_amount: $" << snackItems.at(i).getPricePerAmount() << "\n" << "\n";
    }

    std::cout<<endl;
	std::cout<<"DRINKS"<<endl;

    for(int i = 0, max = drinkItems.size(); i != max; ++i){
        if(drinkItems.at(i).getAisle().compare("drinks") == 0){
            std::cout << drinkItems.at(i).getName()<< "\n" << "\t" << "Section: drinks" <<"\n" << "\t";
            std::cout << "Type: " << drinkItems.at(i).getType() << "\n" <<"\t" << "Price_per_ounce: $"  << drinkItems.at(i).getPricePerOz() << "\n" << "\n";

        }
    }

    std::cout<<endl;
	std::cout<<"COSMETICS"<<endl;

    for(int i = 0, max = cosmeticItems.size(); i != max; ++i){
        if(cosmeticItems.at(i).getAisle().compare("cosmetics") == 0){
            std::cout << cosmeticItems.at(i).getName()<< "\n" << "\t" << "Section: cosmetics" <<"\n" << "\t";
            std::cout << "Brand: " << cosmeticItems.at(i).getBrand() << "\n" <<"\t" << "Price: $"  << cosmeticItems.at(i).getPrice() << "\n" << "\n";

        }
    }

}



#endif /* STORE_H_ */
