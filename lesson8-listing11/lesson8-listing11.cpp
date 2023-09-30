//
//  lesson8-listing11.cpp
//  lesson8-listing11
//
//  Created by domain_management on 9/2/23.
//
// Showing that an array variable is simply a pointer to the first element -duh!

#include <iostream>

using namespace std;

int main(){
   
    // Static array of 5 integers
    int myNumbers[5];
    
    // Array assigned to pointer to int
    int* pointToNums = myNumbers;
    
    // Display address contained in pointer
    cout << "pointToNums, points to: " << hex << pointToNums << endl;
    
    // Address of first element of array
    cout << "&myNumbers[0] = " << hex << &myNumbers[0] << endl;
    
    return 0;
    
}
