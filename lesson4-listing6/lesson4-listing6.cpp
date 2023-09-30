//
//  lesson4-listing6.cpp
//  lesson4-listing6
//
//  Created by domain_management on 8/20/23.
//
// Risky C-Style Strings

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    cout << "Enter a word NOT longer than 20 characters: ";
    
    char userInput [21];
    cin >> userInput;
    
    cout << "Length of your input was: " << strlen(userInput) << endl;
    // Addition of library "string.h" provides function strlen().
    
    return 0;
}
