//
//  lesson6-listing2.cpp
//  lesson6-listing2
//
//  Created by domain_management on 8/23/23.
//
// Checking for bounds - compound statements using if..else

#include <iostream>
#include<string>

using namespace std;

int main(){
    cout << "Enter a line of text: " << endl;
    string userInput;
    getline (cin, userInput);
    //NOTE: function getline uses source (cin) and destination (userInput) as arguements.
    
    char copyInput[20] = {};
    if (userInput.length() < 20){    // Check bounds using .length method
        cout << "Input within bounds, creating a copy." << endl;
        userInput.copy (copyInput, userInput.length()); // Copy using .copy method
        cout << "copyInput contains: " << copyInput << endl;
    }
    else
        cout << "Bounds exceeded: can't copy!" << endl;
    
    return 0;
}
