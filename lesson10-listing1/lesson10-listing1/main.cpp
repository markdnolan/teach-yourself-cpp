//
//  main.cpp
//  lesson10-listing1
//
//  Created by domain_management on 9/8/23.
//
/* A simple inheritance hierarchy demonstrated using the piscean world
 */

#include <iostream>

using namespace std;

class Fish {
    
public:
    bool isFreshWaterFish;
    
    void Swim() {
        if (isFreshWaterFish)
            cout << "swims in lakes." << endl;
        else
            cout << "swims in the sea." << endl;
    }
};

class Tuna: public Fish {
    
public:
    Tuna() {
        isFreshWaterFish = false;
    }
};

class Carp: public Fish {
    
public:
    Carp() {
        isFreshWaterFish = true;
    }
};

    
int main() {
    
    Carp myLunch;
    Tuna myDinner;
    
    cout << "About my food: " << endl;
    
    cout << "Lunch ";
    myLunch.Swim();
    
    cout << "Dinner ";
    myDinner.Swim();
    
    return 0;
}
