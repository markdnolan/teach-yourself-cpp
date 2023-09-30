//
//  main.cpp
//  lesson10-listing2
//
//  Created by domain_management on 9/8/23.
//
/* A better "Fish" class, using the "protected" keyword
 to expose its member attribute only to the derived classes
 */

#include <iostream>

using namespace std;

class Fish {
    
protected:

    bool isFreshWaterFish;  // Accessible only to deriver classes.
 
public:
    
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
    
    // Uncomment line below to see that protected members
    // aren't accessible from outside the class hierarchy.
    // myLunch.isFreshWaterFish = false;
    
    return 0;
}

