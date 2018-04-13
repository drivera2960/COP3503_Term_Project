
#ifndef COP3503_TERM_PROJECT_PHARMACY_H
#define COP3503_TERM_PROJECT_PHARMACY_H

#include "Store.h"


using namespace std;


class Pharmacy{
    friend class Store;
private:
    const string name;
    double pricePerCapsules;
    double supermarketQuantity;

public:
    Pharmacy(string name, double pricePerCapsules, double supermarketQuantity);
    void addDrug(string name, double pricePerCapsules, double supermarketQuantity);
    string getName();
    double getPricePerCapsules();

};

Pharmacy::Pharmacy(string name, double pricePerCapsules,
                   double supermarketQuantity) {
    this->pricePerCapsules = pricePerCapsules;
    this->supermarketQuantity = 100;

}

string Pharmacy::getName() {
    return this->name;
}
double Pharmacy::getPricePerCapsules() {
    return this->pricePerCapsules;
}

#endif //COP3503_TERM_PROJECT_PHARMACY_H
