//
//  lesson5-listing3.cpp
//  lesson5-listing3
//
//  Created by domain_management on 8/22/23.
//
//  Equality and relational operators.

#include <iostream>
#include<compare>   // Added new header file to include "spaceship" operator <=>.

using namespace std;

int main(){
    cout << "Enter two integers: " << endl;
    int num1 = 0, num2 = 0;
    cin >> num1;
    cin >> num2;
    
    cout << endl;
    cout << "Output is 0 or 1 BUT these are Boolean values (true or false) NOT" << endl;
    cout << "integers, so a comparision between output and the numbers 0 & 1" << endl;
    cout << "will fail (false)." << endl << endl;
    
    bool isEqual = (num1 == num2);
    cout << "Equality test: " << isEqual << endl;
    
    bool isUnequal = (num1 != num2);
    cout << "Inequality test: " << isUnequal << endl;
    
    bool isGT = (num1 > num2); // Greater than.
    cout << " " << num1 << " > " << num2 << " test: " << isGT << endl;
    
    bool isLT = (num1 < num2); // Less than.
    cout << " " << num1 << " < " << num2 << " test: " << isLT << endl;
    
    bool isGTE = (num1 >= num2); // Greater than or equal to.
    cout << " " << num1 << " >= " << num2 << " test: " << isGTE << endl;
    
    bool isLTE = (num1 <= num2) ; // Less than or equal to.
    cout << " " << num1 << " <= " << num2 << " test: " << isLTE << endl;
    
    cout << endl << "Using \"Spaceship\" operator..." << endl << endl;
    
    auto resultofComparison = (num1 <=> num2); // introduced in C++20!
    // notice use of "auto" type, the type of the result may change based on the types of the variables being compared.
    
    if (resultofComparison < 0)
        cout << "num1 is less than num2" << endl;
    else if (resultofComparison > 0)
        cout << "num1 is greater than  num2" << endl;
    else // Comparison evluates to zero.
        cout << "They're equal" << endl;
    // cout << "Value of comparison is: " << resultofComparison; endl;
    // This won't compile! "resultofComparison" is of unknown type.
    cout << endl;
    
    return 0;
}
