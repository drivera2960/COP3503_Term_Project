

#ifndef COP3503_TERM_PROJECT_SNACKS_H
#define COP3503_TERM_PROJECT_SNACKS_H

#include "Store.h"

using namespace std;

class Snacks{
    friend class Store;

    private:
    const string name;
    double pricePerAmount;
    double supermarketQuantity;

public:
    Snacks(string name, double pricePerAmount, double supermarketQuantity);
    void addSnack(string name, double pricePerAmount, double supermarketQuantity);
    string getName();
    double getPricePerAmount();

};

Snacks::Snacks(string name, double pricePerAmount, double supermarketQuantity) {
    this->pricePerAmount = pricePerAmount;
    this->supermarketQuantity = 100;
}

string Snacks::getName() {
    return this-> name;
}
double Snacks::getPricePerAmount() {
    return this->pricePerAmount;
}

#endif //COP3503_TERM_PROJECT_SNACKS_H
