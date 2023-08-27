//
//  lesson7-listing12.cpp
//  lesson7-listing12
//
//  Created by domain_management on 8/27/23.
//
// Using Lamda Functions to Display Elements in an array and sort them.
// Don't even try to understand this yet!

#include <iostream>

// Including new header files for Lamda functions
#include<algorithm>
#include<vector>

using namespace std;

void DisplayNums(vector<int>& dynArray){
    for_each (dynArray.begin(), dynArray.end(), \
    // The line below is a Lamda function
              [] (int Element) {cout << Element << " ";} );
    
    cout << endl;
}

int main(){
    vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);
    
    DisplayNums(myNums);
    
    cout << "Sorting them in descending order: " << endl;
    
    // Another Lamda function here
    sort (myNums.begin(), myNums.end(), [](int Num1, int Num2) {return (Num2 < Num1);});
    
    DisplayNums(myNums);
    
    return 0;
}
