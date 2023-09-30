//
//  lesson9-listing3.cpp
//  lesson9-listing3
//
//  Created by domain_management on 9/3/23.
//
// Using consttuctors to initialize class member variables.

#include <iostream>
#include<string>

using namespace std;

class Human{
    
private:
    // Private member data:
    string name;
    int age;
    
public:
    Human(){ // This is the constructor
        
        age = 1;    // initialization
        cout << "Constructed an instance of class Human." << endl;
    }
    
    void SetName(string humansName){
        name = humansName;
    }
    
    void SetAge(int inputAge){
        age = inputAge;
    }
    
    void IntroduceSelf(){
        cout << "I am " + name << " and am ";
        cout << age << " years old" << endl;
    }
    
};

int main(){
    
    Human firstWoman;
    firstWoman.SetName("Eve");
    firstWoman.SetAge(28);
   
    firstWoman.IntroduceSelf();
    
    Human firstChild;
    firstChild.SetName("Able");
    
    firstChild.IntroduceSelf();
    
    return 0;
}


