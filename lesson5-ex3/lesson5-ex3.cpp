//
//  lesson5-ex3.cpp
//  lesson5-ex3
//
//  Created by domain_management on 8/22/23.
//
// Lesson 5, Exercise 3, program to input 2 Boolean values then performs bitwise operations on them.

#include <iostream>

using namespace std;

int main(){
    cout << "Enter two Boolean (0 or 1) values: " << endl;
    bool num1 = false, num2 = false;
    cin >> num1;
    cin >> num2;
    
    cout << num1 << " AND " << num2 << " = ";
    bool bitwiseAnd = (num1 & num2);
    cout << bitwiseAnd << endl;
    
    cout << num1 << " OR " << num2 << " = ";
    bool bitwiseOR = (num1 | num2);
    cout << bitwiseOR << endl;
    
    cout << num1 << " XOR " << num2 << " = " << (num1^num2) << endl;
    
    return 0;
}
