//
//  lesson3-listing2.cpp
//  lesson3-listing2
//
//  Created by domain_management on 8/19/23.
//
//  Demonstrating the scope of variables.

#include <iostream>

using namespace std;

void MultiplyNumbers(){
    cout << "Enter the first number: ";
    int firstNumber = 0;
    cin >> firstNumber;
    
    cout << "Enter the second number: ";
    int secondNumber = 0;
    cin >> secondNumber;
    
    // Multiply two numbers, store result in a variable.
    int multiplicationResult = firstNumber * secondNumber;
    
    //Display result.
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;
    
}

int main(){
    cout << "this program multiplies two numbers." << endl;
    
    // Call the function that does all the work.
    MultiplyNumbers();
    
    // cout << firstNumber << " x " << secondNumber;
    // cout << " = " << multiplicationResult << endl;
    
    return 0;
}
