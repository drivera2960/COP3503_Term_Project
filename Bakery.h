#ifndef COP3503_TERM_PROJECT_MASTER_BAKERY_H
#define COP3503_TERM_PROJECT_MASTER_BAKERY_H

#include "Store.h"
#include <string>
#include <iostream>

using namespace std;

class Bakery
{
    friend class Store;
private:
    const string name;
    const string type;
    double pricePerBox;
    double amount;
    double supermarketQuantity;

public:
    Bakery(string name, double pricePerBox);
    void addBakeryProduct(string name);
    string getName();
    double getAmount();
    double getPricePerBox();
};

Bakery::Bakery(string name, double pricePerBox):name(name)
{
    this ->pricePerBox = pricePerBox;
    this-> supermarketQuantity = 100;
}

string Bakery::getName()
{
    return this -> name;
}

double Bakery::getAmount()
{
    return this ->amount;
}


double Bakery::getPricePerBox()
{
    return this->pricePerBox;
}


#endif
