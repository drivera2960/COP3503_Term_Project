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

class Cashier : public Store
{
private:
    double subTotal;
    double total;
    const double tax;
    std::vector<Store> cart;
public:
    std::string paymentMethod;
    int paymentAmt = 0;
    int custChange = 0;
    subTotal = 0;
    total = 0;
    tax = 0.06;
    
    Cashier(double subTot){
        subTotal = subTot;
    }
    
    void setSubtotal(double subTot){
        subtotal = sub;
    }
    
    double getTotal() const{
        return total == (tax * subTotal);
    }
    
}

#endif /* Cashier_h */
