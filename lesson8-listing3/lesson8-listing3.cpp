//
//  lesson8-listing3.cpp
//  lesson8-listing3
//
//  Created by Mark Nolan on 8/28/23.
//
// Pointer reassignment to another value.

#include <iostream>

using namespace std;

int main(){
    
    int age = 30;
    
    int* pointsToInt = &age;
    cout << "pointsToInt points to age now." << endl;
    
    // Displaying the value of the pointer.
    cout << "pointsToInt = " << hex << pointsToInt << endl;
    
    int dogsAge = 9;
    pointsToInt = &dogsAge;
    cout << "pointsToInt points to dogsAge now." << endl;
    
    
    cout << "pointsToInt = " << hex << pointsToInt << endl;
    
    return 0;
}
