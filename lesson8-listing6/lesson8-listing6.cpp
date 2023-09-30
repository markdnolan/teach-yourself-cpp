//
//  lesson8-listing6.cpp
//  lesson8-listing6
//
//  Created by Mark Nolan on 8/29/23.
//
// memory allocation for pointers

#include <iostream>

using namespace std;

int main(){
    
    cout << "Size of fundamental types -" << endl;
    cout << "Size of char = " << sizeof(char) << endl;
    cout << "Size of int = " << sizeof(int) << endl;
    cout << "Size of double = " << sizeof(double) << endl;
    
    cout << endl << "Size of pointers to fundamental types -" << endl;
    cout << "Size of pointer to char = " << sizeof(char*) << endl;
    cout << "Size of pointer to int = " << sizeof(int*) << endl;
    cout << "Size of poiter to double = " <<sizeof(double*) << endl;
   
    return 0;
}
