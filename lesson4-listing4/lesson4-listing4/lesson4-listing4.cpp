//
//  lesson4-listing4.cpp
//  lesson4-listing4
//
//  Created by domain_management on 8/20/23.
//
// Dynamic arrays

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> dynArray(3); // dynamic array of integers
    
    dynArray[0] = 365;
    dynArray[1] = -421;
    dynArray[2] = 789;
    
    cout << "Number of intergers in array: " << dynArray.size() << endl;
    
    cout << "Enter another element to insert: ";
    int newValue = 0;
    cin >> newValue;
    dynArray.push_back(newValue);
    
    cout << "Number of integers in array: " << dynArray.size() << endl;
    cout << "Last element in array: ";
    cout << dynArray[dynArray.size() - 1] << endl;
    return 0;
}
