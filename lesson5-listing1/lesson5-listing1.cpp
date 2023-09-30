//
//  lesson5-listing1.cpp
//  lesson5-listing1
//
//  Created by domain_management on 8/22/23.
//
// Arithmatic operators on integers.

#include <iostream>

using namespace std;

int main(){
    cout << "Enter two integers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << "Remainder (modulo, %) of  " << num1 << " / " << num2 << " = " << num1 % num2 << endl;
    
    return 0;
}
