//
//  lesson8-listing16.cpp
//  lesson8-listing16
//
//  Created by domain_management on 9/2/23.
//
// Using new(nothrow) which returns NULL when allocation fails

#include <iostream>

using namespace std;

int main(){
    // Request LOTS of memory space, use nothrow
    int* pointsToManyNums = new(nothrow) int [0x1fffffffffff];
    
    if (pointsToManyNums){  // check pointsToManyNums != NULL
        // Use the alloacted memory
        delete[] pointsToManyNums;
    }
    else
        cout << "Memory allocation failed. Ending program." << endl;
    
    return 0;
}
