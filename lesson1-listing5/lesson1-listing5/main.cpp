//
//  main.cpp
//  lesson1-listing5
//
//  Created by domain_management on 9/17/23.
//
/* Demonstrating the presence of a hidden VFT pointer in comparing two classes identical except for a function declared virtual
 */

#include <iostream>

using namespace std;

class SimpleClass {
    int a, b;
    
public:
    void DoSomething() {}
};

class Base {
    int a, b;
    
public:
    virtual void DoSomething() {}
};

int main() {
    
    cout << "sizeof (SimpleClass) = " << sizeof (SimpleClass) << endl;
    cout << "sizeof (Base) = " << sizeof (Base) << endl;
    
    return 0;
}
