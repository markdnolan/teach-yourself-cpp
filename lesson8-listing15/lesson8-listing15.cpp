//
//  lesson8-listing15.cpp
//  lesson8-listing15
//
//  Created by domain_management on 9/2/23.
//
// Hadling exceptions & exiting gracefully when 'new' fails.

#include <iostream>

using namespace std;

// remove the try-catch block to see this application crash
int main(){
    try{
        // Request a LOT of memory!
        int* pointsToManyNums = new int [0x1fffffffffff];
        // Use the allocated memory
        
        delete[] pointsToManyNums;
    }
    catch (bad_alloc){
        cout << "memory allocation failed. Ending program." << endl;
    }
    
    return 0;
    
}
