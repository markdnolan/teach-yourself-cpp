//
//  main.cpp
//  lesson10-listing5
//
//  Created by domain_management on 9/10/23.
//
/* Using the scope resolution operator (::) to invoke the base class functions from a derived fuction
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
            cout << "Swims in lakes." << endl;
        else
            cout << "Swims in the sea." << endl;
    }
};

class Tuna : public Fish {
    
public:
    Tuna(): Fish(false) {
    }
    
    void Swim() {
        cout << "A Tuna swims really fast." << endl;
    }
};

class Carp : public Fish {
    
public:
    Carp(): Fish(true) {
    }
    
    void Swim() {
        cout << "A Carp swims really slowly." << endl;
        Fish::Swim();
    }
};
    
int main() {
    
    Carp myLunch;
    Tuna myDinner;
    
    cout << "Getting my food to swim." << endl;
    
    cout << "Lunch: ";
    myLunch.Swim();
    
    cout << "Dinner: ";
    myDinner.Fish::Swim();
    
    return 0;
}
