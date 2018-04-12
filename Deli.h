
#ifndef DELI_H
#define DELI_H

#include "Store.h"
#include <string>
#include <iostream>

using namespace std;

class Deli
{
    friend class Store;
        private:
        const string name;
        double pricePerLlb;
        double supermarketQuantity;

        public:
        Deli(string name, double pricePerLlb);
        void addDeliProduct(string name, string section);
        string getName();
        double getPricePerLlb();

};

Deli::Deli(string name, double pricePerLlb):name(name)
{
    this ->pricePerLlb = pricePerLlb;
    this-> supermarketQuantity = 100;
}

string Deli::getName()
{
    return this -> name;
}


double Deli::getPricePerLlb()
{
    return this->pricePerLlb;
}





#endif //COP3503_TERM_PROJECT_MASTER_DELI_H
