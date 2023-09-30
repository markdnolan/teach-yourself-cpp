//
//  lesson9-listing1.cpp
//  lesson9-listing1
//
//  Created by domain_management on 9/3/23.
//
// A simple first class

#include <iostream>
#include <string>

using namespace std;

// NOTE: class and Method names begin with Capital letter (Pascal case).
class Human{
public:
    string name;
    int age;
    
    void IntroduceSelf(){
        cout << "I am " + name << " and am ";
        cout << age << " years old" << endl;
    }
};

int main(){
    
    // An object of class Human with attribute name as "Adam".
    //NOTE: object names begin with lower case & use Capital to denote word changes (Camel case).
    Human firstMan;
    firstMan.name = "Adam";
    firstMan.age = 30;
    
    // An object of calss Human with attribute name as "Eve".
    Human firstWoman;
    firstWoman.name = "Eve";
    firstWoman.age = 28;
    
    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
    
    return 0;
}
