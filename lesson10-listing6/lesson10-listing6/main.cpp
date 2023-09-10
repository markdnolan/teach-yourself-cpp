//
//  main.cpp
//  lesson10-listing6
//
//  Created by domain_management on 9/10/23.
//
/* Using Tuna::Swim() to hide the overloaded method
 */

#include <iostream>

using namespace std;

class Fish {
     
public:
    
    void Swim() {
        
        cout << "Fish swims... !";
    }
    
    void Swim(bool isFreshWaterFish) {
        
        if (isFreshWaterFish)
            cout << "Swims in lakes." << endl;
        else
            cout << "Swims in the sea." << endl;
    }
};

class Tuna : public Fish {
    
public:
        
    void Swim() {
        cout << "A Tuna swims really fast." << endl;
    }
};
   
int main() {
    
    Tuna myDinner;
    
    cout << "About my food:" << endl;
    
    // myDinner.Swim(false);    //failure: Tuna::Swim() hides Fish::Swim(bool)
    myDinner.Swim();
    
    return 0;
}

/* There are 3 solutions to this problem
 
 1.     Use the scope resolution operator in main() - myDinner.Fish::Swim();
 
 2.     Use the keyword "using" in the class "Tuna" to unhide Swim() -
            using Fish::Swim;

class Tuna : public Fish {
     
public:
 
    using Fish::Swim; {     // Unhide all Swimm() methods in Fish class
    }
 
    void Swim() {
        cout << "A Tuna swims really fast." << endl;
    }
 };
 
 3.     Overrride ALL overloaded variants of "Swim()" in the class "Tuna" (such as by invoking mthods as Fish::Swim(...) via Tuna::Fish(....))
 
 class Tuna : public Fish {
     
 public:
         
     void Swim(bool IsFreshWaterFish) {
         Fish::Swim(isFreshWaterFish);
     }
    
    void Swim() {
        cout << "A Tuna swims really fast." << endl;
    }
 };
 */
