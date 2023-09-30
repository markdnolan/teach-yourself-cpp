//
//  lesson8-listing1.cpp
//  lesson8-listing1
//
//  Created by Mark Nolan on 8/28/23.
//
// determining the addresses of variables

#include <iostream>

using namespace std;

int main(){
    
    int age = 30;
    const double Pi = 3.14159265;
    
    // Use & to find address in memory
    cout << "Integer age is located at: " << &age << endl;
    cout << "Double Pi is located at: " << &Pi << endl;
    
    return 0;
}
