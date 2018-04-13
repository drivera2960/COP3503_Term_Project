//
//  FrozenFoods.h
//  
//
//  Created by Martin Lasprilla on 4/12/18.
//

#ifndef FrozenFoods_h
#define FrozenFoods_h

#include "Store.h"


class FrozenFoods{
    friend class Store;
        private:
            const std::string name;
            const std::string type;
            double pricePerItem;
            double supermarketQuantity;
    
        public:
            Frozen(string name, string type, double pricePerLlb);
            void addFrozen(std::string name, std::string section);
            std::string getName();
            std::string getType();
            double pricePerItem();
    
};

Frozen::Frozen(std::string name, std::string type, double pricePerItem):name(name), type(type){
    this -> pricePerItem = pricePerItem;
    this -> supermarketQuantity = 100;
}

string Frozen::getName(){
    return this -> name;
}

string Frozen::getType(){
    return this-> type;
}

double Frozen::getpricePerItem(){
    return this -> pricePerItem;
    
}

#endif /* FrozenFoods_h */
