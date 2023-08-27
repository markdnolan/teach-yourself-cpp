//
//  lesson7-exercise2.cpp
//  lesson7-exercise2
//
//  Created by domain_management on 8/27/23.
//
// Function that accepts an array of ypre double as an input.

#include <iostream>

using namespace std;

void DisplayArray(double numbers[], int length){
    for (int index =0; index < length; ++index){
        cout << numbers[index] << endl;
    }
    cout << endl;
}

int main(){
    double myNums[4] = { 3.24, 7.89, -3, 156.985};
    int arrayLength = (sizeof(myNums) / sizeof(double));
    cout << arrayLength << endl;
    DisplayArray(myNums, arrayLength);
    
    return 0;
    
}
