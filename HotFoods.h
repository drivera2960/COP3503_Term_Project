#ifndef HotFoods_h
#define HotFoods_h

#include <string>

class HotFoods{
    friend class Store;
private:
    const std::string name;
    //const std::string type;
    double pricePerItem;
    double supermarketQuantity;
public:
    HotFoods(std::string name, double pricePerItem);
    void addHotFoods(std::string name, std::string section);
    std::string getName();
    std::string getType();
    double getPricePerItem();
    
};

HotFoods::HotFoods(std::string name, double pricePerItem):name(name)
{
    this -> pricePerItem = pricePerItem;
    this -> supermarketQuantity = 100;
}

std::string HotFoods::getName()
{
    return this -> name;
}
/*
std::string HotFoods::getType(){
    return this-> type;
}
*/
double HotFoods::getPricePerItem(){
    return this -> pricePerItem;
    
}

#endif /* HotFoods_h */
