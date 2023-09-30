//
//  main.cpp
//  lesson9-listing12
//
//  Created by domain_management on 9/4/23.
//
/* Using keyword explicit  to block unintentional implicet conversions.
 */

#include <iostream>

using namespace std;

class Human {
    
    int age;
    
public:
    
    // Explicit constructor blocks implicit conversions
    explicit Human(int humansAge) : age(humansAge) {}
    
};

void DoSomething(Human person) {
    
    cout << "Human did something." << endl;
}

int main() {
    
    Human kid(10);  // Explicit conversion is OK.
    Human anotherKid = Human(11);    // Explicit, OK.
    DoSomething(kid);   // OK.
    
    // Human anotherKid2 = 11;  // Error: implicit conversion isn't OK.
    // DoSomething(10); // Implicit conversion, not OK.
    
    return 0;
}
