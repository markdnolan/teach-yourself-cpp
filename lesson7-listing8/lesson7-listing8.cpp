//
//  lesson7-listing8.cpp
//  lesson7-listing8
//
//  Created by domain_management on 8/27/23.
//
// Function that takes an array as a parameter.

#include <iostream>

using namespace std;

void DisplayArray(int numbers[], int length){
    for (int index = 0; index < length; ++ index){
        cout << numbers[index] << " ";
        }
    cout << endl;
}

// Overloaded function to deal with arrays of different types.
void DisplayArray(char characters[], int length){
    for (int index =0; index < length; ++ index){
        cout << characters[index] << " ";;
    }
    cout << endl;
}

int main(){
    
    int myNums[4] = {24, 58, -1, 245};
    DisplayArray(myNums, 4);
    
    char myStatement[7] = {'H' , 'e', 'l', 'l', 'o', '!', '\0' };
    // Null added even though array is never treated as a string - best practice.
    DisplayArray(myStatement, 7);
    
    return 0;
}
