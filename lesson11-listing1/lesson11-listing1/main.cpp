//
//  main.cpp
//  lesson11-listing1
//
//  Created by domain_management on 9/16/23.
//
/* Invokin methods using an instance of the base class "fish" that belongs to "tuna"
 */

#include <iostream>

using namespace std;

class Fish {
    
public:
    
    void Swim() {
        cout << "Fish swims!" <<  endl;
    }
};

class Tuna:public Fish {
    
public:
    
    // Overide Fish::Swim
    void Swim() {
        cout << "Tuna Swims!" << endl;
    }
};

/* The Fish& in this statement tells the compliler that the variable inputFish is of type "Fish", so inputFish.Swim calls the "Fish::Swim" method in the class "Fish" NOT "Tuna". This can be proved by replacing Fish& with Tuna& in the line below.
 */
void MakeFishSwim(Fish& inputFish) {
    // Calling Fish::Swim.
    inputFish.Swim();
}

int main() {
    
    Tuna myDinner;
    
    // calling Tuna::Swim
    myDinner.Swim();
    
    //sending Tuna as Fish
    MakeFishSwim(myDinner);
    
    return 0;
}
