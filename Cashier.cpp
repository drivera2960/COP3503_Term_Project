//
//  Cashier.cpp
//  
//
//  Created by Martin Lasprilla on 4/19/18.
//

#include <stdio.h>
#include <string>
#include <numeric>
#include "Cashier.h"
#include 

// create a function that pushes the price of the selected item to cart vector



// create a function that adds up all the prices in cart vector
int sum_of_items;
sum_of_items = std::accumulate(cart.begin(), cart.end(), 0.0);

int main(){
    cout << "Your Total is: " << total ;
    cout << "How would you like to pay? Cash or Card?" << endl;
    cin << paymentMethod << ;
    
    if (strncmp(paymentMethod, "Cash") {
        cout << "How much cash are you going to pay with?";
        cin << paymentAmt << endl;
        custChange = paymentAmt - total;
        cout << "Your change is: " << custChange;
    }
        else{
            cout << "Your Total is: " << total ;
            
        }

}
