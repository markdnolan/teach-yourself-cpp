//
//  lesson8-listing14.cpp
//  lesson8-listing14
//
//  Created by domain_management on 9/2/23.
//
// Safer pointer programming: correction of listing 8.13

#include <iostream>

using namespace std;

int main(){
    
    cout << "Is it sunny (y/n)? ";
    char userInput = 'y';
    cin >> userInput;
    
    // declare pointer & initialize
    bool* const isSunny = new bool;
    *isSunny = true;
    
    if (userInput == 'n')
        *isSunny = false;
    
    cout << "Boolean flag sunny says: " << *isSunny << endl;
    
    // release valid memory
    delete isSunny;
    
    return 0;
}
