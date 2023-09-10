//
//  main.cpp
//  lesson10-listing4
//
//  Created by domain_management on 9/10/23.
//
/* Derived classes overriding a method in the base class
 */

#include <iostream>

using namespace std;

class Fish {
    
private:
    bool isFreshWaterFish;
    
public:
    
    // Fish constructor
    Fish(bool isFreshWater) : isFreshWaterFish(isFreshWater) {
    }
    
    void Swim() {
        if (isFreshWaterFish)
            cout << "Swims in lakes."  << endl;
        else
            cout << "Swins in the sea." << endl;
        }
};

class Tuna: public Fish {
    
public:
    
    Tuna(): Fish(false) {
    }
    
    void Swim() {
        cout << "A Tuna swims really fast." << endl;
        }
};

class Carp: public Fish {
    
public:
    Carp(): Fish(true) {
    }
    
    void Swim() {
        cout << "A Carp swims really slowly." << endl;
        }
};



int main() {
    
    Carp myLunch;
    Tuna myDinner;
    
    cout << "About my food:"  << endl;
    
    cout << "Lunch: ";
    myLunch.Swim();
    
    cout << "Dinner: ";
    myDinner.Swim();
    
    return 0;
}
