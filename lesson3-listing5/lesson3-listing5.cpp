//
//  lesson3-listing5.cpp
//  lesson3-listing5
//
//  Created by domain_management on 8/19/23.
//
// Finding the sizes of standard C++ variable types

#include <iostream>

int main(){
    using namespace std;
    cout << "Computing the size of inbuilt variable types." << endl;
    
    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of unsigned short int: " << sizeof(unsigned short) << endl;
    cout << "Size of short int: " << sizeof(short) << endl;
    cout << "Size of unsigned long int: " << sizeof(unsigned long) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of unsigned long long: " << sizeof(unsigned long long) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    
    cout << "The output changes with compiler, hardware and OS." << endl;
    
    return 0;
    
}
