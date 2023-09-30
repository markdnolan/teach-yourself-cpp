//
//  main.cpp
//  lesson11-listing8
//
//  Created by domain_management on 9/17/23.
//
/* Demonstrating how the "virtual" keywork in the inheritance hierarchy helps restrict the number of instances of the base class "Animal" to one.
 */

#include <iostream>

using namespace std;

int counter=0;

class Animal {
    
public:
    
    Animal() {
        cout << "Animal construtor" << endl;
        cout << "Counter = " << ++counter << endl;
    }
    
    int age;
};

class Mammal: public virtual Animal{};
class Bird: public virtual Animal{};
class Reptile: public virtual Animal {};

class Platypus final: public Mammal, public Bird, public Reptile {
    
public:
    Platypus() {
        cout << "Platypus constructor" << endl;
    }
};

int main() {
    
    Platypus duckbilledP;
    
    
    // no compile error as there is only one Animal:: age
    duckbilledP.age = 25;
    
    return 0;
}
