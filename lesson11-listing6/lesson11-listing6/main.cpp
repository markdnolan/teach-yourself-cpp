//
//  main.cpp
//  lesson11-listing6
//
//  Created by domain_management on 9/17/23.
//
/* The "Fish" class as an abstract base class for "Tina" and "Carp".
 */

#include <iostream>

using namespace std;

class Fish {
    
public:
    virtual void Swim() = 0;
};

class Tuna:public Fish {
    
public:
    void Swim() {
        cout << "A Tuna swims fast in the sea." << endl;
    }
};

class Carp:public Fish {

public:
    void Swim() {
        cout << "A Carp swims slowly in lakes." << endl;
    }
};

class Trout:public Fish {
    
public:
    
    void Fins() {
        cout << "A trout has a second dorsal fin." << endl;
    }
};

void MakeFishSwim(Fish& inputFish) {
    inputFish.Swim();
}

int main() {
    
    // Fish myFish; // Fails, can't instantiate ABC (Abstract Base Class)
    
    Carp myLunch;
    Tuna myDinner;
    // This fails since the "Swim()" method isn't implemented in the derived class "Trout".
    // Trout myBreakfast;
    
    MakeFishSwim(myLunch);
    MakeFishSwim(myDinner);
        
    return 0;
}
