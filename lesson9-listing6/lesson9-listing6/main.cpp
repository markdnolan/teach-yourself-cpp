//
//  main.cpp
//  lesson9-listing6
//
//  Created by domain_management on 9/3/23.
//
/* A class with a default constructor thaat accepts input parameters with a default values to set members using an initialization list.
 */

#include <iostream>
#include<string>

using namespace std;


class Human{
    
private:
    string name;
    int age;
    
public:
    // Two input parameters, both with default values
    Human(string humansName = "John Doe", int humansAge = 0)
        :name(humansName), age(humansAge)   // This part of the statement (no ; so is continuation, maps input parameters to private variables.
    {

        cout << "Constructed a human called ";
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
    Human firstWoman("Eve", 18);

    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
    
    return 0;
}
