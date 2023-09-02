//
//  lesson8-ex1.cpp
//  lesson8-ex1
//
//  Created by domain_management on 9/2/23.
//
// pointers

#include <iostream>

using namespace std;

int main(){
    
    int number = 3;
    cout << "Number = " << number << endl;
    int* pNum1 = &number;
    cout << "pNum = "  << pNum1 << endl;
    cout << "Data at address pointed to by pNum1 = " << *pNum1 << endl;
    *pNum1 = 20;
    cout << "pNum = "  << pNum1 << endl;
    cout << "Data at address pointed to by pNum1 = " << *pNum1 << endl;
    cout << "Number = " << number << endl;
    int *pNum2 = pNum1;
    cout << "pNum2 = " << pNum2 << endl;
    cout << "Data at address pointed to by pNum2 = " << *pNum2 << endl;
    cout << "pNum = "  << pNum1 << endl;
    cout << "Data at address pointed to by pNum1 = " << *pNum1 << endl;
    cout << "Number = " << number << endl;
    number *= 2;
    cout << "pNum2 = " << pNum2 << endl;
    cout << "Data at address pointed to by pNum2 = " << *pNum2 << endl;
    cout << "pNum = "  << pNum1 << endl;
    cout << "Data at address pointed to by pNum1 = " << *pNum1 << endl;
    cout << "Number = " << number << endl;
    cout << *pNum2 << endl;
    
    return 0;
}
