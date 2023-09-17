//
//  main.cpp
//  lesson11-exercise3
//
//  Created by domain_management on 9/17/23.
//

#include <iostream>

using namespace std;

class Vehicle {
    
public:
    Vehicle() {
        cout << "Vehicle constructor." << endl;
    }
    
    // This is the correct  code : virtual ~Vehicle() {
    ~Vehicle() {
        cout << "Vehicle destructor." << endl;
    }
};

class Car:public Vehicle {
    
public:
    Car() {
        cout << "Car constuctor." << endl;
    }
    ~Car() {
        cout << "Car destructor." << endl;
    }
};

int main() {
   
    Vehicle* myRacer = new Car;
    delete myRacer;
    
    /* Results in:
     
     Vehicle constructor.
     Car constuctor.
     Vehicle destructor.
     Program ended with exit code: 0
     
     Notice "Car" destructor isn't invoked - memory leak!
     To correct, make base class destructor virtual (see above).
     */
    
    return 0;
}
