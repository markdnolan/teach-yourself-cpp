//
//  main.cpp
//  lesson9-listing5-version2
//
//  Created by domain_management on 9/3/23.
//
/* A class with no default constructor and one input parameter set with a default value.
    In this arrangement, we don't need to provide the second input parameter.
 
 NOTE: The logical extension of this is that an overloaded constructor with defaults set for all input parameters is equivalent to a default constructor.
 
 */

#include <iostream>
#include<string>

using namespace std;

class Human{
    
private:
    string name;
    int age;
    
public:
    Human(string humansName, int humansAge = 25){
        
        name = humansName;
        age = humansAge;
        cout << "Overloaded constructor creates ";
        cout << name << " of " << age << " years." << endl;
    }
    
    void IntroduceSelf(){
        cout << "I am " + name << " and am ";
        cout << age << " years old" << endl;
    }
    
};

int main(){
    
    Human firstMan("Adam");
    Human firstWoman("Eve", 28);

    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
    
    return 0;
}

