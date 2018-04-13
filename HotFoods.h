//
//  HotFoods.h
//  
//
//  Created by Martin Lasprilla on 4/12/18.
//

#ifndef HotFoods_h
#define HotFoods_h

class HotFoods{
    friend class Store;
private:
    const std::string name;
    const std::string type;
    double pricePerItem;
    double supermarketQuantity;
public:
    HotFoods (string name, string type, double pricePerItem);
    void addHotFoods(std::string name, std::string section);
    std::string getName();
    std::string getType();
    double pricePerItem();
    
};

HotFoods::HotFoods(std::string name, std::string type, double pricePerItem):name(name), type(type){
    this -> pricePerItem = pricePerItem;
    this -> supermarketQuantity = 100;
}

string HotFoods::getName(){
    return this -> name;
}

string HotFoods::getType(){
    return this-> type;
}

double HotFoods::getpricePerItem(){
    return this -> pricePerItem;
    
}



#endif /* HotFoods_h */
