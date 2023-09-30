//
//  lesson7-listing5.cpp
//  lesson7-listing5
//
//  Created by domain_management on 8/26/23.
//
// Recursive functions
// Here we go, into new territory, take care to understand before moving on.

#include <iostream>

using namespace std;

int CYCLES = 1;

int GetFibNumber(int fibIndex){
    cout << "Cycle number " << CYCLES << endl;
    CYCLES++;
    cout << "Index = " << fibIndex << endl;
    // base case - guarantees that function will end
    if (fibIndex < 2){
        return fibIndex;
    }
    else{    // recursion if fibIndex >=2
        // recursive case, notice that fibIndex decrements each run to make sure that base case is satisfied at some point.
        int fibResult = GetFibNumber(fibIndex - 1) + GetFibNumber(fibIndex - 2);
        cout << endl << "Exit value: " << fibResult << endl << endl;
        return fibResult;
    }
}

int main(){
    cout << "Enter 0-based index of desired Fibonacci Number: ";
    int index = 0;
    cin >> index;
    
    int fibResult =0;
    fibResult = GetFibNumber(index);
    cout << endl << endl << "Finonacci number is: " << fibResult << endl;
    cout << "End value of cycles: " << CYCLES << endl;
    
    return 0;
    
}
