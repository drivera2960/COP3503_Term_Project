#ifndef COP3503_TERM_PROJECT_MASTER_BAKERY_H
#define COP3503_TERM_PROJECT_MASTER_BAKERY_H

#include "Store.h"
#include <string>
#include <iostream>

class Bakery
{
    friend class Store;
private:
    const std::string name;
   // const std::string type;
    double pricePerBox;
    //double amount;
    double supermarketQuantity;

public:
    Bakery(std::string name, double pricePerBox);
    void addBakeryProduct(std::string name);
    std::string getName();
   // double getAmount();
    double getPricePerBox();
};

Bakery::Bakery(std::string name, double pricePerBox):name(name)
{
	//this ->amount = amount;
    this ->pricePerBox = pricePerBox;
    this-> supermarketQuantity = 100;
}

std::string Bakery::getName()
{
    return this -> name;
}
/*
double Bakery::getAmount()
{
    return this -> amount;
}
*/

double Bakery::getPricePerBox()
{
    return this->pricePerBox;
}


#endif
