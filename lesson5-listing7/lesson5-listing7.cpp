//
//  lesson5-listing7.cpp
//  lesson5-listing7
//
//  Created by domain_management on 8/22/23.
//
// Using Logical NOT and Logical OR operator to make decisions

#include <iostream>

using namespace std;

int main(){
    cout << "Answer questions with a 0 for \"NO\" or 1 for \"YES\"." << endl;
    cout << "Is there a discount on your favourite car?" << endl;
    bool onDiscount = false;
    cin >> onDiscount;
    
    cout << "Did you get a great bonus?" << endl;
    bool greatBonus = false;
    cin >> greatBonus;
    
    if (onDiscount || greatBonus)
        cout << "Congratulations, you can buy that car!" << endl;
    else
        cout << "Sorry, waiting a while is a good idea." << endl;
    
    if (!onDiscount)
        cout << "Car not on discount." << endl;
    
    return 0;    
}
