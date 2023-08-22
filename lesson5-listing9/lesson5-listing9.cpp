//
//  lesson5-listing9.cpp
//  lesson5-listing9
//
//  Created by domain_management on 8/22/23.
//
// Using bitwise shift right to divide by 2 and bitwise left to multiply by 2.

#include <iostream>

using namespace std;

int main(){
    cout << "Enter a number:";
    int inputNum = 0;
    cin >> inputNum;
    
    int halfNum = inputNum >> 1;
    int quarterNum = inputNum >> 2;
    int doubleNum = inputNum << 1;
    int quadrupleNum = inputNum << 2;
    
    cout << "Quarter: " << quarterNum << endl;
    cout << "Half: " << halfNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Quadruple: " << quadrupleNum << endl;
    
    return 0;
}
