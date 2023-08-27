//
//  lesson7-listing10.cpp
//  lesson7-listing10
//
//  Created by domain_management on 8/27/23.
//
// inline functions - function code is copied into parent function at each call.

#include <iostream>

using namespace std;

// define an inline function that doubles.
inline long DoubleNum (int inputNum){
    return inputNum * 2;
}

int main(){
    cout << "Enter an integer: ";
    int inputNum = 0;
    cin >> inputNum;

    // Call inline function.
    cout << "Double is: " << DoubleNum(inputNum) << endl;
    
    return 0;
}
