//
//  lesson8-listing17.cpp
//  lesson8-listing17
//
//  Created by domain_management on 9/2/23.
//
// Demonstrating that references are aliases for assigned values.

#include <iostream>

using namespace std;
int main(){
    
    int original = 30;
    cout << "original = " << original << endl;
    cout << "original is at address: " << hex << &original << endl;
    
    int& ref1 = original;
    cout << "ref1 is at address: " << hex << &ref1 << endl;
    
    int& ref2 = ref1;
    cout << "ref2 is at address: " << hex << &ref2 << endl;
    cout << "Therefore, ref2 = " << dec << ref2 << endl;
    
    return 0;
}
