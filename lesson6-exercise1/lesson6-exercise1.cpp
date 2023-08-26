//
//  lesson6-exercise1.cpp
//  lesson6-exercise1
//
//  Created by domain_management on 8/24/23.
//
// loop to display array in reverse order

#include <iostream>

using namespace std;

int main(){
    const int ARRAY_LENGTH = 5;
    int myNums[ARRAY_LENGTH] = {0};
    cout << "Populate array of " << ARRAY_LENGTH << " integers." << endl;
    
    for (int counter = 0; counter < ARRAY_LENGTH; ++counter){
        cout << "Enter an integer for element " << counter << ": ";
        cin >> myNums[counter];
    }
    
    cout << "Displaying contents of the array in reverse: " << endl;
    
    for (int counter = (ARRAY_LENGTH-1); counter >= 0; --counter)
        cout << "Element " << counter << " = " << myNums[counter] << endl;
   
    return 0;
}
