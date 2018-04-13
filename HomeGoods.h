#ifndef COP3503_TERM_PROJECT_MASTER_HYGIENE_H
#define COP3503_TERM_PROJECT_MASTER_HYGIENE_H

#include "Store.h"
#include <string>

class HomeGoods{
    friend class Store;
private:
    const std::string name;
    const std::string type;
    double pricePerUnit;
    double amount;
    double supermarketQuantity;

public:
    HomeGoods(std::string name,std::string type, double amount, double pricePerUnit);
    std::string getName();
    HomeGoods addHomeGoods(std::string name);
    double getPricePerUnit();
    double getAmount();

};

HomeGoods::HomeGoods(std::string name, std::string type, double amount, double pricePerUnit):name(name)
{
   	this -> amount = amount;
    this ->pricePerUnit = pricePerUnit;
    this-> supermarketQuantity = 100;
}

std::string HomeGoods::getName()
{
    return this -> name;
}

double HomeGoods::getAmount()
{
    return this ->amount;
}


double HomeGoods::getPricePerUnit()
{
    return this->pricePerUnit;
}


#endif //COP3503_TERM_PROJECT_MASTER_HYGIENE_H
