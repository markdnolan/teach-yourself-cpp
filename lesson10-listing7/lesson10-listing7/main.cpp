//
//  main.cpp
//  lesson10-listing7
//
//  Created by domain_management on 9/10/23.
//
/*  The order of construction and the order of destruction of the base class and derived class and their members
 */

#include <iostream>

using namespace std;

class FishDummyMember {
    
public:
    
    FishDummyMember() {
        cout << "FishDummyMember constructor." << endl;
    }
    
    ~FishDummyMember() {
        cout << "FishDummyMember destructor." << endl;
    }
};

class Fish {
    
protected:
    // Creates an instance of FishDummyMember class called "dummy".
    // This is protected so is available to derived classes, such as "Tuna".
    FishDummyMember dummy;
    
public:
        // Fish constructor
    Fish() {
        cout << "Fish constructor." << endl;
    }
    
    ~Fish() {
        cout << "Fish destructor." << endl;
    }
};

class TunaDummyMember {

public:
    TunaDummyMember() {
        cout << "TunaDummyMember constructor." << endl;
    }
    
    ~TunaDummyMember() {
        cout << "TunaDummyMember destructor." << endl;
    }
};

class Tuna: public Fish {
    
private:
    // Creates an instance of TunaDummyMember class called "dummy".
    TunaDummyMember dummy;
    
public:
    Tuna() {
        cout << "Tuna constructor." << endl;
    }
    ~Tuna() {
        cout << "Tuna destructor." << endl;
    }
};


int main() {
    
    Tuna myDinner;
    
    return 0;
}
