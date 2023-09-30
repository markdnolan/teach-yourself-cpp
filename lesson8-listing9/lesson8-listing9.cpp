//
//  lesson8-listing9.cpp
//  lesson8-listing9
//
//  Created by Mark Nolan on 8/31/23.
//
// Using offsets with pointers

#include <iostream>

using namespace std;

int main(){
    
    cout << "How many integers do you wish to enter? ";
    int numEntries = 0;
    cin >> numEntries;
    
    int* pointsToInts = new int [numEntries];
    
    cout << "Allocated for " << numEntries << " integers." << endl;
    for (int counter = 0; counter < numEntries; ++counter){
        cout << "Enter number " << counter << ": ";
        // NOTE: for this loop we leave pointsToInts pointing to first value of list
        // and add an offset
        cin >> *(pointsToInts + counter);
    }
    
    cout << "Displaying all numbers entered: " << endl;
    for (int counter = 0; counter < numEntries; ++counter){
        //  NOTE: this time we increment pointsToInts each loop
        //  and then reset it to the start point after the loop
        
        cout << *(pointsToInts++) << " ";
    }
    
    cout << endl;
    
    // return pointer to initial position
    // equivalent to pointsToInts = pointsToInts - numEntries
    pointsToInts -= numEntries;
    
    // done with using memory? release
    delete[] pointsToInts;
    
    return 0;
}
