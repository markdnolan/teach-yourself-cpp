//
//  lesson8-listing13.cpp
//  lesson8-listing13
//
//  Created by domain_management on 9/2/23.
//
// Poor Pointer Hygiene.

#include <iostream>

using namespace std;

int main(){
    
    // unitialized pointer (BAD)!
    // bool* isSunny;
    bool* isSunny = 0;
    
    
    cout << "Is it sunny (y/n)? ";
    char userInput = 'y';
    cin >> userInput;
    
    isSunny = new bool;
    if (userInput == 'y'){
        // isSunny = new bool;
        *isSunny = true;
    }
    
    // isSunny contains invalid value if user entered 'n'
    cout << "Boolean flag sunny says: " << *isSunny << endl;
    
    // delete being invoked also when new wasn't
    delete isSunny;
    
    return 0;
    
}
