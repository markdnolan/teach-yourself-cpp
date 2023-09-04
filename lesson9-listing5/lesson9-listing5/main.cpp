//
//  main.cpp
//  lesson9-listing5
//
//  Created by domain_management on 9/3/23.
//
/* A class with no default constructor, showing that now we MUST provide input parameters when instantiating (creating) the new (class) object.
 Note:  Used Xcode default "main" for this example, to see what happens.
        Works well, will change to this as default from here onwards.
 */

#include <iostream>
#include<string>

using namespace std;

class Human{
    
private:
    string name;
    int age;
    
public:
    Human(string humansName, int humansAge){
        
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
    
    Human firstMan("Adam", 25);
    Human firstWoman("Eve", 28);

    firstMan.IntroduceSelf();
    firstWoman.IntroduceSelf();
    
    return 0;
}
