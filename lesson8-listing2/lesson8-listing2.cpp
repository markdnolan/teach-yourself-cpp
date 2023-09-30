//
//  lesson8-listing2.cpp
//  lesson8-listing2
//
//  Created by Mark Nolan on 8/28/23.
//
// declaring and initializing a pointer

#include <iostream>

using namespace std;

int main(){
    
    int age = 30;
    int* pointsToAge = &age;    // pointer initialized to &age, the address of age
    
    //displaying the value of the pointer.
    
    cout << "Pointer to integer age is at: " << hex << pointsToAge << endl;
    // 'hex' not required in xcode but good practice
    cout << "Integer age using reference operator is: " << hex << &age << endl;
    
    return 0;
}
