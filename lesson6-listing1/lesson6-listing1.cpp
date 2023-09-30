//
//  lesson6-listing1.cpp
//  lesson6-listing1
//
//  Created by domain_management on 8/23/23.
//
// Multiplying or adding based on user input - if...else

#include <iostream>

using namespace std;

int main(){
    cout << "Enter two integers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    cout << "Enter \'m\' to multipy, anything else to add: ";
    // NOTE use of \' to insert single quote in line of text
    char userSelection = '\0';
    // NOTE: initialize a char variable to NULL using '\0'
    // NOTE: strings are enclosed in single quotes '.
    cin >> userSelection;
    
    int result = 0;
    if (userSelection == 'm')
        result = num1 * num2;
    // NOTE: No semicolon after "if" line - next line is a continuation of the same statement.
    // NOTE: No braces {} - this is a single statement if.
    else
        result = num1 + num2;
    // NOTE: No semicolon after "else" line - next line is a continuation of the same statement.
    // NOTE: No braces {} - this is a single statement else.
    
    cout << "result is: " << result << endl;
    
    return 0;
}
