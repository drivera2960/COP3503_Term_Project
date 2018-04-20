//
//  Cashier.h
//  
//
//  Created by Martin Lasprilla on 4/19/18.
//

#ifndef Cashier_h
#define Cashier_h

#include <string>
#include <vector>


int paymentAmt = 0;
int custChange = 0;
std::string paymentMethod;


class Cashier
{
    friend class Store;
private:
    double subTotal;
    double total;
    const double tax;
    std::vector<double> cart;
public:

    Cashier(double subTot);
    subTotal = 0;
    total = 0;
    tax = 0.06;
};
    
Cashier::Cashier(double subTot)
{
    this -> subTotal = subTot;
}
    
double getTotal() const{
    return total = (tax * subTotal);
}
    


#endif /* Cashier_h */
