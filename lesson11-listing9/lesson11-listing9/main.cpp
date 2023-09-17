//
//  main.cpp
//  lesson11-listing9
//
//  Created by domain_management on 9/17/23.
/*  "Tuna" and "Carp" classes, which support a "clone ()" function as a simulated virtual copy constructor.
 */
//

#include <iostream>

using namespace std;

class Fish {
    
public:
    virtual Fish* Clone() = 0;
    virtual void Swim() = 0;
    //  Virtual destructor.
    virtual ~Fish() {};
};

class Tuna: public Fish {
    
public:
    Fish* Clone() override {
        /*  The compiler supplies an implicit pointer along with the names of the functions as ‘this’.
            The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable within the body of all nonstatic functions.
            For a class X, the type of this pointer is ‘X* ‘.
         */
        // return a new instance of Tuna
        return new Tuna (*this);
    }
    
    void Swim() override final {
        cout << "A Tuna swims fast in the sea." << endl;
    }
};

class BluefinTuna final:public Tuna {
    
public:
    Fish* Clone() override {
        return new BluefinTuna(*this);
    }
    
    //  Can't overrride "Tuna::Swim" because it's final in "Tuna".
};

class Carp final: public Fish {
    
    Fish* Clone() override {
        return new Carp(*this);
    }
    void Swim() override final {
        cout << "A Carp swims slowly in lakes." << endl;
    }
};

int main() {
    
    const int ARRAY_SIZE = 4;
    
    // Static array of pointers to base class "Fish*"
    Fish* myFishes[ARRAY_SIZE];
    
    //  Assign newly created objects to each element in array.
    //  Note how the array myFishes is able to collect seemingly different types that are all related to a common base type "Fish"
    // myFishes[0] is a pointer to a new constructor of class "Tuna", that is, a new instance of "Tuna", notice that a constructor hasn't been explicitley defined becuase we don't need it to do anything except create the class.
    myFishes[0] = new Tuna();
    myFishes[1] = new Carp();
    myFishes[2] = new BluefinTuna();
    myFishes[3] = new Carp();
    
    
    // Another static array of pointers to base class "Fish*"
    Fish* myNewFishes[ARRAY_SIZE];
    
    // For each element in myNewFishes invoke the "Clone" method in the class at the address pointed to by myFishes[index] in the myFishes array, that is, set myNewFishes[0] as a pointer to the outcome of myFishes[0]::Clone, which is Tuna::Clone
    for (int index = 0; index < ARRAY_SIZE; ++index)
        myNewFishes[index] = myFishes[index] ->Clone();
    
    // invoke a virtual method to check
    
    // For each element in myFishes invoke the "Swim" method in the class at the address pointed to by myFishes[index] in the myFishes array, that is a pointer to the outcome of myFishes[0]::Swim, which is Tuna::Swim
    
    for (int index = 0; index < ARRAY_SIZE; ++index)
        myFishes[index] -> Swim();
    
    // memory cleanup
    for (int index=0; index < ARRAY_SIZE; ++index) {
        delete myFishes[index];
        delete myNewFishes[index];
    }
            
    return 0;
}
