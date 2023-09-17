//
//  main.cpp
//  lesson10-exercise1
//
//  Created by Mark Nolan on 9/11/23.
//


#include <iostream>

using namespace std;

class Mammal {
    
public:
    Mammal() {
        cout << "Constructing mammal" << endl;
    }
    
    ~Mammal() {
        cout << "Destructing mammal" << endl;
    }
    
    void FeedBabyMilk() {
        cout << "Mammal: baby says glug!" << endl;
    }
};

class Reptile {
    
public:
    
    Reptile() {
        cout << "Constructing reptile" << endl;
    }
    
    ~Reptile() {
        cout << "Destructing reptile" << endl;
    }
    void InjectVenom() {
        cout << "Reptile: Shoo enemy! Injects venom!" << endl;
    }
};

class Bird {
    
public:
    
    Bird() {
        cout << "Constructing bird" << endl;
    }
    
    ~Bird() {
        cout << "Destructing bird" << endl;
    }
    
    void LayEggs() {
        cout << "Bird: Laid my eggs, an lighter now!" << endl;
    }
};

class Platypus final: public Mammal, public Bird, public Reptile {
    /* "final" denotes that this is the end of the line no further classes can be derived from this one.
     */
    
public:
    
    Platypus() {
        cout << "Constructing platypus" << endl;
    }
    
    ~Platypus() {
        cout << "Destructing platypus" << endl;
    }
    
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
