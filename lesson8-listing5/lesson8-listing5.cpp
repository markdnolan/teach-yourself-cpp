//
//  lesson8-listing5.cpp
//  lesson8-listing5
//
//  Created by Mark Nolan on 8/28/23.
//
// Manipulating data using pointers.

#include <iostream>

using namespace std;

int main(){
    
    int dogsAge =30;
    cout << "Initialized dogsAge to " << dogsAge << " at address " << hex << &dogsAge << endl;
    
    int* pointsToAnAge = &dogsAge;
    cout << "pointsToAnAge points to dogsAge at address " << hex << pointsToAnAge << endl;
    
    cout << "Enter the age of your dog.";
    
    // store the input at the memory poited to by pointsToAnAge.
    cin >> *pointsToAnAge;
    
    // Displaying the address where the age is stored.
    cout << "Input stored at address " << hex << pointsToAnAge << endl;
    
    // NOTE: Even though we're using the variable name, after a poiter has been used to change the contents, contents are treated as Hex, so we need the add the 'dec'.
    cout << "Integer dogsAge " << dec << dogsAge << endl;
    cout << "Contents of memory pointed to by pointsToAnAge = " << dec << *pointsToAnAge << endl;
    cout << "pointsToAnAge, points to address: " << hex <<pointsToAnAge << endl;
    
    
    return 0;
}
