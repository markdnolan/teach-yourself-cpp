//
//  main.cpp
//  lesson9-exercise3
//
//  Created by domain_management on 9/4/23.
//

#include <iostream>
#include <string>

using namespace std;

class Human {
    
private:
    int age;
    string name;
    
public:
    Human(int humansAge, string humansName)
    :age(humansAge), name(humansName) {
    }

    string getName() {
        return name;
    }
    
    int getAge() {
        return age;
    }
};

int main() {
    
    Human firstMan( 25, "Adam");
    
    cout << "The First man's name is " << firstMan.getName() << " and their age is " << firstMan.getAge() << endl;
    
    return 0;
}
