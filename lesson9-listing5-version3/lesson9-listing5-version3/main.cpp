//
//  main.cpp
//  lesson9-listing5-version3
//
//  Created by domain_management on 9/3/23.
//
/* A class with no default constructor and all input parameters set with a default value.
     
    - this is effecively a default constructor/
 
 */

#include <iostream>
#include<string>

using namespace std;

class Human{
    
private:
    string name;
    int age;
    
public:
    Human(string humansName = "John Doe", int humansAge = 0){
        
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
    
    Human anon;             // NOTE: NO PARENTHESES for default values.
    Human firstMan("Adam");
    Human firstWoman("Eve", 28);

    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
    
    return 0;
}

