//
//  lasson3-ex2.cpp
//  lesson3-ex2
//
//  Created by domain_management on 8/20/23.
//

#include <iostream>

int main(){
    using namespace std;
    cout << "Demonstrating the length of integer types." << endl;
    
    cout << "Size of unsigned integer: " << sizeof(unsigned int) << endl;
    cout << "Size of integer: " << sizeof(int) << endl;
    cout << "Size of long integer: " << sizeof(long) << endl;
    
    cout << "An ungigned integer is " << sizeof(unsigned int) << " bytes and an integer is " << sizeof(int) << " bytes, where as the size of a long integer is " << sizeof(long) << " bytes." << endl;
      
    cout << endl << "The output changes with compiler, hardware and OS." << endl;
    
    return 0;
    
}
