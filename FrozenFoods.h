#ifndef FrozenFoods_h
#define FrozenFoods_h

#include <string>
#include "Store.h"


class FrozenFoods{
    friend class Store;
        private:
            const std::string name;
            //const std::string type;
            double pricePerItem;
            double supermarketQuantity;
    
        public:
            FrozenFoods(std::string name, double pricePerLlb);
            void addFrozen(std::string name, std::string section);
            std::string getName();
            std::string getType();
            double getpricePerItem();
};

FrozenFoods::FrozenFoods(std::string name, double pricePerItem):name(name)
{
    this -> pricePerItem = pricePerItem;
    this -> supermarketQuantity = 100;
}

std::string FrozenFoods::getName(){
    return this -> name;
}
/*
std::string FrozenFoods::getType(){
    return this-> type;
}
*/
double FrozenFoods::getpricePerItem()
{
    return this -> pricePerItem;
}

#endif /* FrozenFoods_h */
