#ifndef COP3503_TERM_PROJECT_MASTER_HYGIENE_H
#define COP3503_TERM_PROJECT_MASTER_HYGIENE_H

#include "Store.h"
#include <string>
#include <iostream>

using namespace std;

class HomeGoods{
    friend class Store;
private:
    const string name;
    const string type;
    double pricePerUnit;
    double amount;
    double supermarketQuantity;

public:
    HomeGoods(string name, double pricePerUnit);
    string getName();
    HomeGoods addHomeGoods(string name);
    string getName();
    double getPricePerUnit();
    double getAmount();

    HomeGoods::HomeGoods(string name, double pricePerUnit):name(name)
    {
        this ->pricePerUnit = pricePerUnit;
        this-> supermarketQuantity = 100;
    }

};
string HomeGoods::getName()
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