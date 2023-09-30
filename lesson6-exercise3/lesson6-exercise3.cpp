//
//  lesson6-exercise3.cpp
//  lesson6-exercise3
//
//  Created by domain_management on 8/24/23.
//
// Program to calcuilate number of Fibonacci numbers requested by user

#include <iostream>

using namespace std;

int main(){
    
    cout << "How many Fibonacci numbers would you like to compute? " << endl;
    cout << "Enter a positive integer: " << endl;
    
    int numsToCalculate = 0;
    
    do{
        cin >> numsToCalculate;
        if (numsToCalculate <= 0)
            cout << numsToCalculate << " isn't a positive integer, please choose a number greater than 0." << endl;
    }while (numsToCalculate<=0);
      
    cout << "This program will now calculate " << numsToCalculate \
    << " Fibonacci numbers" << endl;
    
    int num1 = 0, num2 = 1;
    switch(numsToCalculate){
        case 1:
            cout << num1;
            break;
        case 2:
            cout << num1 << " " << num2 << " ";
            break;
        default:
            for (int counter = 0; counter < numsToCalculate; ++counter){
                cout << num1 + num2 << " ";
                
                int num2Temp = num2;
                num2 = num1 + num2;
                num1 = num2Temp;
            }
            break;
    }
    cout << endl << "Goodbye!" << endl;
    
    return 0;
}
