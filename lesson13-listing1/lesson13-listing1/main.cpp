//
//  main.cpp
//  lesson13-listing1
//
//  Created by domain_management on 9/24/23.
//
/* Using dynamic casting to tell whether a "Fish" object is a "Tuna" or a "Carp" at runtime.
 */

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

class Carp: public Fish {
    
public:
    void Swim() {
        cout << "A Carp swims slowly in lakes." << endl;
    }
    
    void Talk() {
        cout << "Don't talk Carp to me!" << endl;
    }
};

void DetectFishType(Fish* objFish) {
    Tuna* objTuna = dynamic_cast<Tuna*> (objFish);
    if (objTuna) {   // Check success of cast.
        cout << "Detected Tuna, making a Tuna dinner." << endl;
        objTuna -> BecomeDinner();
    }
    
    Carp* objCarp = dynamic_cast<Carp*> (objFish);
    if (objCarp) {
        cout << "Detected Carp, making Carp talk." << endl;
        objCarp -> Talk();
    }
    
    cout << "Verifying type using virtual Fish::Swim()." << endl;
    objFish->Swim();    // Calling virtual function Swim.
}

int main() {
    Carp myLunch;
    Tuna myDinner;
    
    DetectFishType(&myDinner);
    
    cout << endl;
    
    DetectFishType(&myLunch);
    
    return 0;
}
