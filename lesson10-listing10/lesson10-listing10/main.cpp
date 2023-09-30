//
//  main.cpp
//  lesson10-listing10
//
//  Created by domain_management on 9/10/23.
//
/* Using multiple inheritance to model a platypus that is part mammal, part bird, and part reptile.
 */

#include <iostream>

using namespace std;

class Mammal {
    
public:
    void FeedBabyMilk() {
        cout << "Mammal: baby says glug!" << endl;
    }
};

class Reptile {
    
public:
    void InjectVenom() {
        cout << "Reptile: Shoo enemy! Injects venom!" << endl;
    }
};

class Bird {
    
public:
    void LayEggs() {
        cout << "Bird: Laid my eggs, an lighter now!" << endl;
    }
};

class Platypus final: public Mammal, public Bird, public Reptile {
    /* "final" denotes that this is the end of the line no further classes can be derived from this one.
     */
    
public:
    void Swim() {
        cout << "Platypus: Voila, I can swim!" << endl;
    }
};


int main() {
    Platypus realFreak;
    realFreak.LayEggs();
    realFreak.FeedBabyMilk();
    realFreak.InjectVenom();
    realFreak.Swim();
    
    return 0;
}
