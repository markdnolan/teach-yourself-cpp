//
//  main.cpp
//  lesson13-exercise2
//
//  Created by domain_management on 9/24/23.
//
/* You have a pointer "objFish*" that points to an object of calss "Tuna". What cast would you use to get a pointer Tuna* to point to this object of type "Tuna"?*/

#include <iostream>

using namespace std;

class Fish {
    
public:
    virtual void Swim() {
        cout << "A fish swims in water." << endl;
    }
    
    //  Base class should always have a virtual destructor.
    virtual ~Fish() {}
};

class Tuna: public Fish {
    
public:
    void Swim() {
        cout << "A Tuna swims fast in the sea." << endl;
    }
    
    void BecomeDinner() {
        cout << "The Tuna became sushi for my dinner." << endl;
    }
};


int main() {
    Fish* objFish = new Tuna;
    
    objFish->Swim();
    
    Tuna* objTuna = static_cast<Tuna*>(objFish);
    
    objTuna->Swim();
    objTuna->BecomeDinner();
    
    
    return 0;
}
