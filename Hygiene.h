//
// Created by Jayme on 4/11/2018.
//

#ifndef COP3503_TERM_PROJECT_MASTER_HYGIENE_H
#define COP3503_TERM_PROJECT_MASTER_HYGIENE_H

#include "Store.h"
#include <string>
#include <iostream>

using namespace std;

class Hygiene{
    friend class Store;
        private:
            const string name;
            const string type;
            double pricePerUnit;
            double amount;
            double supermarketQuantity;

        public:
            Hygiene(string name, double pricePerUnit);
            string getName();
            Hygiene addHygiene(string name);
            string getName();
            double getPricePerUnit();
            double getAmount();

        Hygiene::Hygiene(string name, double pricePerBox):name(name)
            {
                this ->pricePerUnit = pricePerUnit;
                this-> supermarketQuantity = 100;
            }

};
string Bakery::getName()
{
    return this -> name;
}

double Hygiene::getAmount()
{
    return this ->amount;
}


double Hygiene::getPricePerUnit()
{
    return this->pricePerUnit;
}



#endif //COP3503_TERM_PROJECT_MASTER_HYGIENE_H
