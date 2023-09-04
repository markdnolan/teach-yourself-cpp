//
//  main.cpp
//  lesson9-listing13
//
//  Created by domain_management on 9/4/23.
//
/* The result of using sizeof() on classes and their instances.
 
 This reports the size of DATA ELEMENTS contained within the class declaration, member functions (methods) AND their local variables don't contribute to output of sizeof().
 */

#include <iostream>

using namespace std;

class MyBuffer {
private:
    
    int* myNums;
    
public:
    
    MyBuffer(unsigned int length) { // Constructor
        
        myNums = new int[length];   // Allocate memory.
    }
    
    ~MyBuffer() {   // Destructor
        delete myNums;  // Free allocated memory.
    }
    
    // Other set and get functions to work with myNums
};

class Human {
    
private:
    int age;
    string gender;
    string name;
    
public:
    
    Human(const string& inputName, int inputAge, string inputGender)
    /* const string& inputName means that inputName is passed by reference, that is we're using the actual value created in main, not a copy created when the class is instiated AND the class can't change it. This is then passed to 'name', so name is the name passed to the class & can't be modified by the construcor (line 49 gives compile error).
     */
    : name(inputName), age(inputAge), gender(inputGender) {
        name = name + " test.";
    //    inputName = name;
    }
    
    int getAge() {
        return age;
    }
    
    string getName() {
        return name;
    }
    
    string changeName() {
        name = "Sid";
        return name;
    }
};

int main() {
    
    MyBuffer buf1(5);   // Buffer initialized to 5 integers.
    MyBuffer buf2(20);  // Buffer initialized to 20 integers
    
    cout << "sizeof(MyBuffer) = " << sizeof(MyBuffer) << endl;
    cout << "sizeof(buf1) = " << sizeof(buf1) << endl;
    cout << "sizeof(buf2) = " << sizeof(buf2) << endl;
    
    string testName = "Adam";
    Human firstMan(testName, 25, "man");
    Human firstWoman("Eve", 25, "woman");
    
    cout << "sizeof(Human) = " << sizeof(Human) << endl;
    cout << "sizeof(firstMan) = " << sizeof(firstMan) << endl;
    cout << "sizeof(firstWoman) = " << sizeof(firstWoman) << endl;
    
    cout << firstMan.getName() << "'s age is "<< firstMan.getAge() << endl;
    cout << "Trying to change " << firstMan.getName() << "'s name." << endl;
    firstMan.changeName();
    cout << "First man is now called " << firstMan.getName() << "." << endl;
    cout << "First man is now called " << testName << "." << endl;
    
    return 0;
}
