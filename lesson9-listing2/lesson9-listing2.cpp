//
//  lesson9-listing2.cpp
//  lesson9-listing2
//
//  Created by domain_management on 9/3/23.
//
// Using a class to abstract the value of data (lie about your age).

#include <iostream>

using namespace std;

class Human{
    
private:
    // Private member data:
    int age;
    
public:
    
    void SetAge(int inputAge){
        age = inputAge;
    }
    
    // Human lies about his / her age (if over 30).
    int GetAge(){
        if (age > 30)
            return (age - 2);
        else
            return age;
    }
};

int main(){
    
    
    Human firstMan;
    firstMan.SetAge(35);
    
    Human firstWoman;
    firstWoman.SetAge(22);
    
    cout << "Age of firstMan " << firstMan.GetAge() << endl;
    cout << "Age of firstWoman " << firstWoman.GetAge() << endl;
    
    return 0;
}

