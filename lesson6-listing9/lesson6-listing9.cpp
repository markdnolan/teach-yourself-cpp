//
//  lesson6-listing9.cpp
//  lesson6-listing9
//
//  Created by domain_management on 8/23/23.
//
// Using do...while

#include <iostream>

using namespace std;

int main(){
    char userSelection = 'x';       // Initial value
    do{
        cout << "Enter two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
        
        cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
        
        cout << "Press x to exit (x) or any other key to recalculate." << endl;
        cin >> userSelection;
    } while (userSelection != 'x');
    // while is evaluated here, code in loop executes at least once
    // NOTE: closing brace on same line as while - shows connection between do & while
    
    cout << "Goodbye!" << endl;
    
    return 0;
}
