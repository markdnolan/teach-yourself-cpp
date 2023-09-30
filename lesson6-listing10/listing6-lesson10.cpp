//
//  listing6-lesson10.cpp
//  lesson6-listing10
//
//  Created by domain_management on 8/23/23.
//
//Using for... loops

#include <iostream>

using namespace std;

int main(){
    const int ARRAY_LENGTH = 5;
    int myNums[ARRAY_LENGTH] = {0};
    cout << "Populate array of " << ARRAY_LENGTH << " integers." << endl;
    
    for (int counter = 0; counter < ARRAY_LENGTH; ++counter){
        // NOTE: counter is initialized to 0,
        // then checked against ARRAY_LENGTH BEFORE loop is executed.
        // if counter was initialized to 1 & ARRAY_LENGTH is set to 1
        // code in loop would not execute.
        // counter is incremented AFTER code in loop is executed.
        // pre or post incrementing of counter gives the same result.
        cout << "Enter an integer for element " << counter << ": ";
        cin >> myNums[counter];
    }
    
    cout << "Displaying contents of the array: " << endl;
    
    for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
        cout << "Element " << counter << " = " << myNums[counter] << endl;
    //  NOTE: no semi-colon at end of "for" line, this is a single statement!
    //  NOTE: Since it's a single statement don't need braces {}.
    return 0;
}
