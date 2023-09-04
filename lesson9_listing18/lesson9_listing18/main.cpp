//
//  main.cpp
//  lesson9_listing18
//
//  Created by domain_management on 9/4/23.
//
/* Using constexpr with class Human
 */

#include <iostream>

using namespace std;

class Human {
    
    int age;
    
    
public:
    constexpr Human(int humansAge):age(humansAge) {
        // Empty constructor
    }
    
    constexpr int GetAge() const {
        return age;
    }
};

int main() {
    
    constexpr Human somePerson(15);
    const int hisAge = somePerson.GetAge();
    
    Human anotherPerson(45); // not constant expression
    
    return 0;
}
