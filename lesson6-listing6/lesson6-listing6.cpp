//
//  lesson6-listing6.cpp
//  lesson6-listing6
//
//  Created by domain_management on 8/23/23.
//
// The Conditional (ternary) Operator (?), finding the maximum of two numbers

#include <iostream>

using namespace std;

int main(){
    cout << "Enter two numbers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    // using the ternary operator
    int max = (num1 > num2)? num1 : num2;
    
    cout << "The greater of " << num1 << " and " << num2 << " is " << max << endl;
    
    return 0;    
}
