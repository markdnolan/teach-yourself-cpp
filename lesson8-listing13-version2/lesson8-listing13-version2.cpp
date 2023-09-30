//
//  lesson8-listing13-version2.cpp
//  lesson8-listing13-version2
//
//  Created by domain_management on 9/3/23.
//
// Poor Pointer Hygiene.
// Fix version 2, after re-reading text for understanding

#include <iostream>

using namespace std;

int main(){
    
    // bool* isSunny;
    // unitialized pointer, replace by definition of pointer using new to allocate available memory for type bool.
    bool* isSunny = new bool;
    // now define default value of new pointer
    *isSunny = false;
    
    
    cout << "Is it sunny (y/n)? ";
    char userInput = 'y';
    cin >> userInput;
    
    if (userInput == 'y'){
        // isSunny = new bool;
        // definition moved to top of program
        *isSunny = true;
    }
    
    // We have set a default value in location pointed to by pointer so this now works in all cases
    cout << "Boolean flag sunny says: " << *isSunny << endl;
    
    delete isSunny; // delete now works in all cases as new is outside conditional branch
    
    return 0;
    
}

