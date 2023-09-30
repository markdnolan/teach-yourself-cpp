//
//  lesson8-listing7.cpp
//  lesson8-listing7
//
//  Created by Mark Nolan on 8/31/23.
//
// Accessing dynamic memory using dereference operator

#include <iostream>

/* NOWHERE in this code to we allocate a variable name to the memory allocated, we only allocate a name to the POINTER to the memory, we don't care about the name of the allocated memory since we always access it via the pointer.*/

using namespace std;

int main(){
    
    // Request for memory space for an int
    // NOTE: We request a pointer to the new memory NOT the memeory itself, but we have to specify the type of the information stored in the new memory, so that the correct number of bytes are allocated.
    int* pointsToAnAge = new int;
    
    // Use the allocated memory to store a number
    cout << "Enter your dog's age: ";
    // NOTE: we're using the name of the POINTER not a variable name allocated to the target memory
    cin >> *pointsToAnAge;
    
    // use indirection operator * to access value
    // NOTE: Again we're using the name of the pointer.
    cout << "Age " << *pointsToAnAge << " is stored at " << hex << pointsToAnAge << endl;
    
    // NOTE: we delete the pointer & this releases the memory
    delete pointsToAnAge;   // release memory
    
    return 0;
}
