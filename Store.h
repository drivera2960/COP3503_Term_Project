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
#include "Dairy.h"
#include "Grains.h"
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

		std::vector<Hygiene>hygieneItems;
		std::vector<Dairy> dairyItems;
		std::vector<Grains> grainItems;
		std::vector <Drinks> drinkItems;
		std::vector <Cosmetics> cosmeticItems;

	public:
		Store();
		void listFruit();
		void listMeats();
		void listVegetables();
		void listInfo();

		void addBakery(std::string name, double pricePerBox);
		void addDeli(std::string name, double pricePerLlb, double pricePerUnit);
		void addFrozenFoods(std::string name, double pricePerItem);
		void addHomeGoods(std::string name, double unitsPerPack, double pricePerPack);

		void addMeat(std::string name, std::string type, double pricePerLlb);
		void addPharmacy(std::string name, double pricePerCapsules, double quantity);
		void addProduce(std::string name, std::string type, double pricePerLlb);
		void addSnacks(std::string name, double pricePerAmount, double quantity);

		void addDairy(std::string dairyName, std::string brandName, int sizeFlOz, double storePrice);
		void addGrain(std::string grainName, std::string brandName, double sizeLbs, bool organic, bool glutenFree, double storePrice);
    void addDrinks(std::string name, std::string category, double pricePerOz);
		void addCosmetics(std::string name, std::string brand, double price);

		void addHotFoods(std::string name,  double pricePerItem);
		void addHygiene(std::string name, double pricePerUnit);
};

Store::Store(){
}

void Store::addProduce(std::string name, std::string type, double pricePerLlb)
{
	produceItems.push_back(Produce(name, type, pricePerLlb));
}

void Store::addFrozenFoods(std::string name, double pricePerItem)
{
	frozenFoodItems.push_back(FrozenFoods(name, pricePerItem));
}

void Store::addMeat(std::string name, std::string type, double pricePerLlb)
{
	meatItems.push_back(Meats(name, type, pricePerLlb));
}

void Store::addDeli(std::string name, double pricePerLlb,  double pricePerUnit)
{
    deliItems.push_back(Deli(name, pricePerLlb, pricePerUnit));
}

void Store::addPharmacy(std::string name, double pricePerCapsules, double quantity)
{
    pharmacyItems.push_back(Pharmacy(name, pricePerCapsules, quantity));
}

void Store::addSnacks(std::string name, double pricePerAmount, double quantity)
{
    snackItems.push_back(Snacks(name,pricePerAmount, quantity));
}

void Store::addBakery(std::string name, double pricePerBox)
{
    bakeryItems.push_back(Bakery(name, pricePerBox));
}

void Store::addDrinks(std::string name, std::string category, double pricePerOz){
	drinkItems.push_back(Drinks(name, category, pricePerOz));
}

void Store::addCosmetics(std::string name, std::string brand, double price){
	cosmeticItems.push_back(Cosmetics(name, brand, price));
}

void Store::addGrain(std::string grainName, std::string brandName, double sizeLbs, bool organic, bool glutenFree, double storePrice){
	grainItems.push_back(Grains(grainName, brandName, sizeLbs, organic, glutenFree, storePrice));
}

void Store::addDairy(std::string dairyName, std::string brandName, int sizeFlOz, double storePrice){
	dairyItems.push_back(Dairy(dairyName, brandName, sizeFlOz, storePrice));
}

void Store::addHomeGoods(std::string name, double unitsPerPack, double pricePerPack)
{
	homeGoodItems.push_back(HomeGoods(name, unitsPerPack, pricePerPack));
}

void Store::addHotFoods(std::string name, double pricePerItem)
{
	hotFoodItems.push_back(HotFoods(name, pricePerItem));
}

void Store::addHygiene(std::string name, double pricePerUnit)
{
	hygieneItems.push_back(Hygiene(name, pricePerUnit));
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
	for(int i = 0, max = produceItems.size(); i != max; ++i)
	{
		std::cout << produceItems.at(i).getName()<< "\n\tSection: Produce" <<"\n" << "\t";
		std::cout << "Type: " << produceItems.at(i).getType() << "\n\tPrice_per_llb: $"  << produceItems.at(i).getPricePerLlb();
		std::cout << "\n\tQuantity: "  << produceItems.at(i).getQuantity() << "\n\n";
	}

	std::cout<<std::endl<<"MEATS"<<std::endl;
	for(int i = 0, max = meatItems.size(); i!=max; ++i)
	{
		std::cout << meatItems.at(i).getName()<< "\n" << "\t" << "Section: Meat" << "\n" << "\t";
		std::cout << "Type: " << meatItems.at(i).getType() << "\n" <<"\t" << "Price_per_llb: $" << meatItems.at(i).getPricePerLlb();
		std::cout << "\n\tQuantity: "  << meatItems.at(i).getQuantity() << "\n\n";
	}

    std::cout<<std::endl<<"DELI ITEMS"<<std::endl;
    for(int k = 0, max = deliItems.size(); k!=max; ++k)
    {
        std::cout<<deliItems.at(k).getName()<< "\n" << "\t" << "Section: Deli" << "\n" << "\t";
        std::cout <<"Price_per_llb: $" << deliItems.at(k).getPricePerLlb() << "\n\tPricePerUnit: $" << deliItems.at(k).getPricePerUnit();
				std::cout << "\n\tQuantity: "  << deliItems.at(k).getQuantity() << "\n\n";
    }

    std::cout<<std::endl <<"BAKERY ITEMS"<<std::endl;
    for(int k = 0, max = bakeryItems.size(); k!=max; ++k)
    {
        std::cout<<bakeryItems.at(k).getName()<< "\n" << "\t" << "Section: Bakery" << "\n" << "\t";
        std::cout << "Price per box: $" << bakeryItems.at(k).getPricePerBox();
				std::cout << "\n\tQuantity: "  << bakeryItems.at(k).getQuantity() << "\n\n";
    }

    std::cout<<"PHARMACY"<<std::endl;
    for(int i = 0, max = pharmacyItems.size(); i!= max; i++)
    {
        std::cout<< "Name: "<<pharmacyItems.at(i).getName()<< "\n\tSection: Pharmacy\n\tPrice_per_capsules: $" <<pharmacyItems.at(i).getPricePerCapsules() << "\n" << "\t";
				std::cout << "Quantity: " << pharmacyItems.at(i).getQuantity() << "\n\n";
    }

    std::cout<<std::endl<<"SNACKS"<<std::endl;
    for(int i = 0, max = snackItems.size(); i != max; i++)
    {
        std::cout << "Name: "<<snackItems.at(i).getName() << "\n\t" << "Section: Snacks" << "\n\t" << "Price_per_amount: $" << snackItems.at(i).getPricePerAmount() << "\n" << "\t";
				std::cout << "Quantity: " << snackItems.at(i).getQuantity() << "\n\n";
    }

    std::cout<<std::endl;
	std::cout<<"DRINKS"<<std::endl;
    for(int i = 0, max = drinkItems.size(); i != max; ++i){
            std::cout << drinkItems.at(i).getName()<< "\n" << "\t" << "Section: Drinks" <<"\n" << "\t";
            std::cout << "Type: " << drinkItems.at(i).getCategory() << "\n" <<"\t" << "Price_per_ounce: $"  << drinkItems.at(i).getPricePerOz() << "\n" << "\t";
						std::cout << "Quantity: " << drinkItems.at(i).getQuantity() << "\n\n";
    }

    std::cout<<std::endl;
	std::cout<<"COSMETICS"<<std::endl;
    for(int i = 0, max = cosmeticItems.size(); i != max; ++i){
            std::cout << cosmeticItems.at(i).getName()<< "\n" << "\t" << "Section: Cosmetics" <<"\n" << "\t";
            std::cout << "Brand: " << cosmeticItems.at(i).getBrand() << "\n" <<"\t" << "Price: $"  << cosmeticItems.at(i).getPrice() << "\n" << "\t";
						std::cout << "Quantity: " << cosmeticItems.at(i).getQuantity() << "\n\n";
    }

    std::cout<<std::endl<<"FROZEN FOODS"<<std::endl;
    for(int i = 0, max = frozenFoodItems.size(); i != max; ++i)
    {
    	std::cout << frozenFoodItems.at(i).getName()<< "\n" << "\t" << "Section: Frozen Foods" <<"\n" << "\t";
    	std::cout << "Price: $"  << frozenFoodItems.at(i).getPricePerItem() << "\n\t";
			std::cout << "Quantity: " << frozenFoodItems.at(i).getQuantity() << "\n\n";

    }

    std::cout<<std::endl<<"GRAINS"<<std::endl;
    for(int i = 0, max = grainItems.size(); i != max; ++i)
    {
       	std::cout << grainItems.at(i).getGrainName() << "\n\tSection: Grains\n\tBrand: " << grainItems.at(i).getBrandName();
				std::cout << "\n\tSize: " << grainItems.at(i).getSizeLbs() << "\n\tOrganic: "  << grainItems.at(i).getOrganic();
				std::cout << "\n\tGluten Free: " << grainItems.at(i).getGlutenFree() << "\n\tPrice: $"  << grainItems.at(i).getStorePrice();
				std::cout << "\n\tQuantity: " << grainItems.at(i).getQuantity() << "\n\n";
    }

    std::cout<<std::endl<<"DAIRY"<<std::endl;
    for(int i = 0, max = dairyItems.size(); i != max; ++i)
    {
           	std::cout << dairyItems.at(i).getDairyName() << "\n" << "\t" << "Section: Dairy" <<"\n" << "\t";
           	std::cout << "Brand: " << dairyItems.at(i).getBrandName();
						std::cout << "\n\tSize: " << dairyItems.at(i).getSizeFlOz() << "\n\tPrice: $"  << dairyItems.at(i).getStorePrice();
						std::cout << "\n\tQuantity: " << dairyItems.at(i).getQuantity() << "\n\n";
    }

    std::cout<<std::endl<<"HOME GOODS"<<std::endl;
    for(int i = 0, max = homeGoodItems.size(); i != max; ++i)
    {
    	std::cout << homeGoodItems.at(i).getName() << "\n" << "\t" << "Section: Home Goods" <<"\n" << "\t";
    	std::cout << "Units per pack: " << homeGoodItems.at(i).getUnitsPerPack() << "\n" << "\t" << "Price per pack: $"  << homeGoodItems.at(i).getPricePerPack();
			std::cout << "\n\tQuantity: " << homeGoodItems.at(i).getQuantity() << "\n\n";
    }
    std::cout<<std::endl<<"HOT FOODS"<<std::endl;
    for(int i = 0, max = hotFoodItems.size(); i != max; ++i)
    {
    	std::cout << hotFoodItems.at(i).getName() << "\n" << "\t" << "Section: Hot Foods" <<"\n" << "\t";
    	std::cout << "Price: $"  << hotFoodItems.at(i).getPricePerItem();
			std::cout << "\n\tQuantity: " << hotFoodItems.at(i).getQuantity() << "\n\n";
    }
    std::cout<<std::endl<<"HYGIENE"<<std::endl;
    for(int i = 0, max = hygieneItems.size(); i != max; ++i)
    {
    	std::cout << hygieneItems.at(i).getName() << "\n" << "\t" << "Section: Hygiene" <<"\n" << "\t";
    	std::cout<< "Price: $" << hygieneItems.at(i).getPricePerUnit();
			std::cout << "\n\tQuantity: " << hygieneItems.at(i).getQuantity() << "\n\n";
    }
}

#endif /* STORE_H_ */
