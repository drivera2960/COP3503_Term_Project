
#ifndef DELI_H
#define DELI_H

#include "Store.h"
#include <string>
#include <iostream>


class Deli
{
    friend class Store;
        private:
        const std::string name;
        double pricePerLlb;
        double supermarketQuantity;

        public:
        Deli(std::string name, double pricePerLlb);
        void addDeliProduct(std::string name, std::string section);
        std::string getName();
        double getPricePerLlb();

};

Deli::Deli(std::string name, double pricePerLlb):name(name)
{
    this ->pricePerLlb = pricePerLlb;
    this-> supermarketQuantity = 100;
}

std::string Deli::getName()
{
    return this -> name;
}


double Deli::getPricePerLlb()
{
    return this->pricePerLlb;
}





#endif //COP3503_TERM_PROJECT_MASTER_DELI_H
