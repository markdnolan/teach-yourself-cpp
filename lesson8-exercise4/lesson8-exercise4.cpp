//
//  lesson8-exercise4.cpp
//  lesson8-exercise4
//
//  Created by domain_management on 9/2/23.
//

#include <iostream>

using namespace std;

int main(){
    
    int* pointToAnInt = new int;
    // added * to ensure value at address pointed to by pointToAnInt is set to 9
    *pointToAnInt = 9;
    cout << "The value at pointToAnInt is: " << *pointToAnInt;
    delete pointToAnInt;
    
    return 0;
    
}
