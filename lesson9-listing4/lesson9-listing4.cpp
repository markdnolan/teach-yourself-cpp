//
//  lesson9-listing4.cpp
//  lesson9-listing4
//
//  Created by domain_management on 9/3/23.
//
// Create a class with multiple (overloaded) constructors.

#include <iostream>
#include<string>

using namespace std;

class Human{
    
private:
    string name;
    int age;
    
public:
    Human(){ // default constructor
        
        age = 0;    // Initialized to ensure no junk value.
        cout << "Default constructor: name and age aren't set." << endl;
    }
    
    Human(string humansName, int humansAge){ // overloaded constructor
        
        name = humansName;
        age = humansAge;
        cout << "Overloaded constructor creates ";
        cout << name << " of " << age << " years." << endl;
    }
    
};

int main(){
    
    Human firstMan; // Use default constructor.
    
    Human firstWoman ("Eve", 20);   // Use overloaded constructor.

    return 0;
}
