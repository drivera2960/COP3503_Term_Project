
#ifndef COP3503_TERM_PROJECT_PHARMACY_H
#define COP3503_TERM_PROJECT_PHARMACY_H

#include "Store.h"
#include <string>

class Pharmacy{
    friend class Store;
private:
    const std::string name;
    double pricePerCapsules;
    double supermarketQuantity;

public:
    Pharmacy(std::string name, double pricePerCapsules, double supermarketQuantity);
    //void addDrug(std::string name, double pricePerCapsules, double supermarketQuantity);
    std::string getName();
    double getPricePerCapsules();

};

Pharmacy::Pharmacy(std::string name, double pricePerCapsules, double supermarketQuantity)
{
    this->pricePerCapsules = pricePerCapsules;
    this->supermarketQuantity = 100;
}

std::string Pharmacy::getName()
{
    return this->name;
}
double Pharmacy::getPricePerCapsules()
{
    return this->pricePerCapsules;
}

#endif //COP3503_TERM_PROJECT_PHARMACY_H
