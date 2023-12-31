//
//  main.cpp
//  lesson11-listing4
//
//  Created by domain_management on 9/16/23.
//
/* Using virtual destructors to ensure that destructors in derived classes are invoked when deleting a pointer of type "Base*".
 */

#include <iostream>

using namespace std;

class Fish {
    
public:
    
    Fish() {
        cout << "Constructed Fish." << endl;
    }
    
    virtual ~Fish() {
        cout << "Destoyed Fish." << endl;
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

void DeleteFish(Fish* pFish) {
    delete pFish;
}

int main() {
    cout << "Allocating a Tuna on the free store:" << endl;
    Tuna* pTuna = new Tuna;
    cout << "Deleting the Tuna: " << endl;
    DeleteFish(pTuna);
    
    cout << "Instantiating a Tuna on the stack:" << endl;
    Tuna myDinner;
    cout << "Automatic destruction as it goes out of scope. " << endl;
    
    return 0;
}
