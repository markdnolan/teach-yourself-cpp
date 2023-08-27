//
//  lesson7-listing3.cpp
//  lesson7-listing3
//
//  Created by domain_management on 8/26/23.
//
// Function with no parameters and no return values

#include <iostream>

using namespace std;

// use type "void" to denote no return value
void SayHello();

int main(){
    SayHello();
    return 0;
}

void SayHello(){
    cout << "Hello world!" << endl;
    // don't NEED to include a 'return' statement but can (good practice).
    // return;
}
