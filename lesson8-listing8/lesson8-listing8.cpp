//
//  lesson8-listing8.cpp
//  lesson8-listing8
//
//  Created by Mark Nolan on 8/31/23.
//
// Allocating blocks of memory using new and delete

#include <iostream>

using namespace std;

int main(){
    
    cout << "How many integers shall I reserve memory for?" << endl;
    int numEntries = 0;
    cin >> numEntries;
    
    int* myNumbers = new int[numEntries];
    
    cout << "Memory allocated at: " << hex << myNumbers << endl;
    
    // de-allocate before exiting
    delete[] myNumbers;
    
    return 0;
}
