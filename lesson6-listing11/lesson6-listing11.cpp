//
//  lesson6-listing11.cpp
//  lesson6-listing11
//
//  Created by domain_management on 8/23/23.
//
//  Using a for.. loop without a loop expression

#include <iostream>

using namespace std;

int main(){
    //  Without loop expression (third expression missing)
    for (char userSelection = 'm'; (userSelection != 'x');){
        cout << "Enter two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
        
        cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
        
        cout << "Press x to exit (x) or any other key to recalculate." << endl;
        cin >> userSelection;
    }
    
    cout << "Goodbye!" << endl;
    
    return 0;
}
