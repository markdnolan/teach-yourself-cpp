//
//  main.cpp
//  lesson10-listing3
//
//  Created by domain_management on 9/8/23.
//
/* A derived class constructor with initiation lists
 */

#include <iostream>

using namespace std;

class Fish {
    
protected:

    bool isFreshWaterFish;  // Accessible only to deriver classes.
 
public:
    
    // Fish constructor
    Fish(bool isFreshWater) :isFreshWaterFish(isFreshWater) {
    }
        
    void Swim() {
        if (isFreshWaterFish)
            cout << "swims in lakes." << endl;
        else
            cout << "swims in the sea." << endl;
    }
};

class Tuna: public Fish {
    
public:
    Tuna(): Fish(false) {   // Constructor initializes base.
    }
};

class Carp: public Fish {
    
public:
    Carp(): Fish(true) {
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
    
    // Uncomment line below to see that protected members
    // aren't accessible from outside the class hierarchy.
    // myLunch.isFreshWaterFish = false;
    
    return 0;
}
