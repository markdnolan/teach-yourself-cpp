//
//  listing3-3.cpp
//  listing3-3
//
//  Created by domain_management on 8/19/23.
//

#include <iostream>

using namespace std;

// Declare 3 global variables.
int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers(){
    cout << "Enter the first number: ";
    cin >> firstNumber;
    
    cout << "Enter the second number: ";
    cin >> secondNumber;
    
    // Multiply two numbers, store result in a variable.
    multiplicationResult = firstNumber * secondNumber;
    
    //Display result.
    cout << "Displaying from MultiplyNumbers()." << endl;
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;
}

int main(){
    cout << "this program multiplies two numbers." << endl;
    
    // Call the function that does all the work.
    MultiplyNumbers();
    
    cout << "Displaying from main()." << endl;
    
    // This line will now compile and work!
    cout << firstNumber << " x " << secondNumber;
    cout << " = " << multiplicationResult << endl;
    
    return 0;
}
