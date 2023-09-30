//
//  main.cpp
//  lesson11-listing3
//
//  Created by domain_management on 9/16/23.
//
/* A function that invokes the operator "delete" on "Base*"
 */

#include <iostream>

using namespace std;

class Fish {
    
public:
    
    Fish() {
        cout << "Constructed Fish." << endl;
    }
    
    ~Fish() {
        cout << "Destroyed Fish." << endl;
    }
};

class Tuna:public Fish {
    
public:
    
    Tuna() {
        cout << "Constructed Tuna." << endl;
    }
    
    ~Tuna() {
        cout << "Destroyed Tuna." << endl;
    }
};

/*  Note use of pointer (*) rather than reference (&).
    The function "DeleteFish" uses a pointer to the address of pFish as input BUT declares it as type "Fish", the compiler interpretes this as a call to the base class "Fish" so the delete function acts on the base class "Fish" rather than "Tuna".
    Again, this can be proved by changing "Fish*" to "Tuna*".
 */

void DeleteFish(Fish* pFish) {
    delete pFish;
}

int main() {
    
    cout << "Allocating a Tuna on the free store:" << endl;
    Tuna* pTuna = new Tuna;
    cout << "Deleteing the Tuna: " << endl;
    DeleteFish(pTuna);
    
    cout << "Instantiating a Tuna on the stack:" << endl;
    Tuna myDinner;
    cout << "Automatic destruction as it goes out of scope: " << endl;
    
    return 0;
}
