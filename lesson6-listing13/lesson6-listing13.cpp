//
//  lesson6-listing13.cpp
//  lesson6-listing13
//
//  Created by domain_management on 8/23/23.
//
// Using continue tor Restart and break to Exit from an infinate loop

#include <iostream>

using namespace std;

int main(){
    for (;;){    //an infinate loop
        cout << "Enter two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
        
        cout << "Do you wish to correct the numbers? (y/n): ";
        char changeNumbers = '\0';
        cin >> changeNumbers;
        
        if (changeNumbers == 'y')
            continue;   // restart the loop
        
        cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
        
        cout << "Press x to exit (x) or any other key to recalculate." << endl;
        char userSelection = '\0';
        cin >> userSelection;
        
        if (userSelection == 'x')
            break;  // exit the infinate loop
    }
    
    cout << "Goodbye!" << endl;
    
    return 0;
}
