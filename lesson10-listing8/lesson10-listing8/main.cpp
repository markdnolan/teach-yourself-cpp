//
//  main.cpp
//  lesson10-listing8
//
//  Created by domain_management on 9/10/23.
//
/* A "car" class related to the "motor" class via private inheritance
 */

#include <iostream>

using namespace std;

class Motor {
 
public:
    
    void SwitchIgnition() {
        cout << "Ignition is ON." << endl;
    }
    
    void PumpFuel() {
        cout << "Fuel in cylinders." << endl;
    }
    
    void FireCylinders() {
        cout << "Vroooom!" << endl;
    }
};

class Car:private Motor { // private inheritance
    
public:
    
    void Move() {
        
        SwitchIgnition();
        PumpFuel();
        FireCylinders();
    }
};

int main() {
    
    Car myDreamCar;
    myDreamCar.Move();
    //  myDreamCar.PumpFuel();  // Can't access base's public member
    
    return 0;
}
