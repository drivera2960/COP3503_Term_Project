#ifndef COP3503_TERM_PROJECT_SNACKS_H
#define COP3503_TERM_PROJECT_SNACKS_H

#include <string>
#include "Store.h"

class Snacks{
    friend class Store;

    private:
    const std::string name;
    double pricePerAmount;
    double supermarketQuantity;

public:
    Snacks(std::string name, double pricePerAmount, double supermarketQuantity);
    void addSnack(std::string name, double pricePerAmount, double supermarketQuantity);
    std::string getName();
    double getPricePerAmount();

};

Snacks::Snacks(std::string name, double pricePerAmount, double supermarketQuantity):name(name)
{
    this->pricePerAmount = pricePerAmount;
    this->supermarketQuantity = 100;
}

std::string Snacks::getName()
{
    return this-> name;
}

double Snacks::getPricePerAmount()
{
    return this->pricePerAmount;
}

#endif //COP3503_TERM_PROJECT_SNACKS_H
