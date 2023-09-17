//
//  main.cpp
//  lesson11-listing7
//
//  Created by domain_management on 9/17/23.
//
/* Checking for the number of base class "Animal" instances for one instance of "Platypus."
 */

#include <iostream>

using namespace std;

int counter=0;

class Animal {
    
public:
    Animal() {
        cout << "Animal constructor." << endl;
        cout << "Counter = " << ++counter << endl;
    }
    
    int age;
};

class Mammal:public Animal {
    
public:
    Mammal() {
        cout << "Mammal constructor." << endl;
    }
};
class Bird:public Animal {

public:
    Bird() {
        cout << "Bird constructor." << endl;
    }
};
class Reptile:public Animal {
    
public:
    Reptile() {
        cout << "Reptile constructor." << endl;
    }
};

class Platypus : public Mammal, public Bird, public Reptile {
    
public:
    Platypus() {
        cout << "Platypus constructor." << endl;
    }
};

int main() {
    Platypus duckBilledP;
    
    /*  Uncomment next line of cosde to see compile failure because age is ambiguous: three instances of base Animal per Platypus.
     */
    //  duckBilledP.age = 25;
    
    return 0;
}
