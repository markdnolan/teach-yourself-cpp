//
//  lesson8-listing4.cpp
//  lesson8-listing4
//
//  Created by Mark Nolan on 8/28/23.
//
// Using the dereference or indirection operator (*).

#include <iostream>

using namespace std;

int main(){
    
    int age = 30;
    int dogsAge = 9;
    
    cout << "Integer age = " << age << endl;
    cout << "Integer dogsAge = " << dogsAge << endl;
    
    int* pointsToInt = &age;
    cout << "poitsToInt points to age." << endl;
    
    // Displaying the value of the pointer
    cout << "pointsToInt = " << hex << pointsToInt << endl;
    
    // Displaying the value at the pointed location.
    // The 'dec' is required otherwise the value is shown in hex.
    cout << "*pointsToInt = " << dec << *pointsToInt << endl;
    
    pointsToInt = &dogsAge;
    cout << "pointsToInt points to dogsAge now." << endl;
    
    cout << "pointsToInt = " << hex << pointsToInt << endl;
    cout << "*pointsToInt = " << dec << *pointsToInt << endl;
    
    return 0;
}
