//
// Created by Jayme on 4/11/2018.
//

#ifndef COP3503_TERM_PROJECT_MASTER_HYGIENE_H
#define COP3503_TERM_PROJECT_MASTER_HYGIENE_H

#include <string>

#include "Store.h"

class Hygiene{
    friend class Store;
        private:
            const std::string name;
            const std::string type;
            double pricePerUnit;
            double amount;
            double supermarketQuantity;

        public:
            Hygiene(std::string name, double amount, double pricePerUnit);
            std::string getName();
            double getPricePerUnit();
            double getAmount();

};

Hygiene::Hygiene(std::string name, double amount, double pricePerBox):name(name)
    {
		this ->amount = amount;
        this ->pricePerUnit = pricePerUnit;
        this-> supermarketQuantity = 100;
    }

std::string Hygiene::getName()
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
