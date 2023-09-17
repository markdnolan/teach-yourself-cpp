//
//  main.cpp
//  lesson11-listing2
//
//  Created by domain_management on 9/16/23.
//
/* The effect of declaring "Fish::Swim" as a "virtual" method
 */

#include <iostream>

using namespace std;

class Fish {
    
public:
    
    virtual void Swim() {
        cout << "Fish swims!" << endl;
    }
};

class Tuna:public Fish {
    
public:
    // Override "Fish::Swim".
    void Swim() {
        cout << "Tuna swims!" << endl;
    }
};

class Carp:public Fish {
    
public:
    // Override "Fish::Swim".
    void Swim() {
        cout << "Carp swims!" << endl;
    }
};

void MakeFishSwim(Fish& inputFish) {
    // Calling virtual method "Swim()".
    inputFish.Swim();
}

int main() {
    
    Tuna myDinner;
    Carp myLunch;
    Fish myBreakfast;
    
    // Sending Tuna as Fish.
    MakeFishSwim(myDinner);
    
    // Sending Carp as Fish.
    MakeFishSwim(myLunch);
    
    MakeFishSwim(myBreakfast);
    
    return 0;
}
