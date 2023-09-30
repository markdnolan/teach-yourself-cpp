//
//  lesson8-listing12.cpp
//  lesson8-listing12
//
//  Created by domain_management on 9/2/23.
//
/* Accessing elements in an array using the dereference operator (*)
 and using the array operator ([]) with a pointer.
 */

#include <iostream>

using namespace std;

int main(){
    
    const int ARRAY_LEN =5;
    
    //  Intitializa a static array of 5 integers.
    int myNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};
    
    //  Pointer initialized to first element in array.
    int* pointToNums = myNumbers;
    
    cout << "Display array using pointer syntax, operator* " << endl;
    for (int index =0; index < ARRAY_LEN; ++index)
        cout << "Element " << index << " = " << *(myNumbers + index) << endl;
    
    cout << "Display array using ptr with array syntax, operator [] " << endl;
    for (int index = 0; index < ARRAY_LEN; ++index)
        cout << "Element " << index << " = " << pointToNums[index] << endl;
    
    return 0;
}
