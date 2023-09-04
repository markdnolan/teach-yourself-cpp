//
//  main.cpp
//  lesson9-listing14
//
//  Created by domain_management on 9/4/23.
//
/* Using the 'friend' keyword to allow an external function 'DisplayAge()' access to private data members.
 */

#include <iostream>
#include <string>

using namespace std;

class Human {
    
private:
    friend void DisplayAge(const Human& person);
    string name;
    int age;
    
public:
    Human(string humansName, int humansAge) {
        name = humansName;
        age = humansAge;
    }
};

void DisplayAge(const Human& person) {
    cout << person.age << endl;
}

int main() {
    Human firstMan("Adam", 25);
    cout << "Accessing private member age via friend function: ";
    DisplayAge(firstMan);
    
    return 0;
}
