//
//  main.cpp
//  lesson12-exercise2
//
//  Created by domain_management on 9/24/23.
//
/* Program a move constructor and move assignment operator for the class "DynamicFloats" that encapsulates a dynamically allocated array in the form of a private membe "float*".*/

#include <iostream>
#include <algorithm>

using namespace std;

class DynamicFloats {
    
private:
    float* myNums;
    unsigned int bufLength;
    
public:
    
    DynamicFloats(unsigned int length) {
        cout << "Constructing a new instance with " \
        << length << " elements." << endl;
        bufLength = length;
        myNums = new float[length];   // Allocate memory.
    }
    
    DynamicFloats(const DynamicFloats& src) {   // Copy constructor.
        cout << "Copy constructor creating deep copy." << endl;
        bufLength = src.bufLength;
        myNums = new float[bufLength];
        copy(src.myNums, src.myNums + bufLength, myNums);   // Deep copy.
    }
    
  
    DynamicFloats(DynamicFloats&& src) {    // Move constructor.
        cout << "Move constructor transferring ownership." << endl;
        if (src.myNums != NULL) {
            bufLength = src.bufLength;
            myNums = src.myNums;    // Take ownership
            
            src.myNums = NULL;
            src.bufLength = 0;
        }
    }

    
    DynamicFloats& operator = (const DynamicFloats& src) {  // Copy assignment.
        cout << "Copy assignment creating deep copy." << endl;
        if (myNums != src.myNums) {  // Avoid copy to self.
            if (myNums)
                delete myNums;
            
            bufLength = src.bufLength;
            myNums = new float [bufLength];
            copy(src.myNums, src.myNums + bufLength, myNums);   // Deep copy.
        }
        
        return *this;
    }
    

    DynamicFloats& operator = (DynamicFloats&& src) { // Move assignment.
        cout << "Move assignment transferring ownership." << endl;
        if ((src.myNums != NULL) && (myNums != src.myNums)) {
            delete[] myNums;
            myNums = src.myNums;    // Take ownership.
            bufLength = src.bufLength;
            
            src.bufLength = 0;
            src.myNums = NULL;
        }
        
        return *this;
    }

    
    DynamicFloats operator + (const DynamicFloats& bufToAppend) {
        cout << "Operator '+' concatenating." << endl;
        DynamicFloats newBuf(this->bufLength + bufToAppend.bufLength);
        
        for (unsigned int counter = 0; counter < bufLength; ++counter)
            newBuf.SetValue(counter, *(myNums + counter));
        
        for (unsigned int counter = 0; counter < bufToAppend.bufLength; ++counter)
            newBuf.SetValue(counter + bufLength, *(bufToAppend.myNums + counter));
        
        return newBuf;
    }
    
    ~DynamicFloats () {
        delete[] myNums;    // Free allocated memory.
        
    }

    void SetValue(unsigned int index, int value) {
        if (index < bufLength)  // Check for bounds.
            *(myNums + index) = value;
    }
    
    void DisplayBuf() {
        for (unsigned int counter = 0; counter < bufLength; ++ counter)
            cout << *(myNums + counter) << " ";
        
        cout << endl;
    }
};
     

int main() {
    unsigned int buf1Length = 5;
    DynamicFloats buf1(buf1Length);
    for (unsigned int counter = 0; counter < buf1Length; counter++)
        buf1.SetValue(counter, counter+1);
    unsigned int buf2Length = 15;
    
    DynamicFloats buf2(buf2Length);
    for (unsigned int counter =0; counter < buf2Length; counter++)
        buf2.SetValue(counter, counter + buf1Length + 1);
    
    cout << "Concatenation at object instantiation: " << endl;
    DynamicFloats buf3(buf1 + buf2);
    
    buf3.DisplayBuf();
    
    DynamicFloats bufSum(1);
    
    cout << "Concatenation at assignment: " << endl;
    bufSum = buf1 + buf2 + buf3;
    
    return 0;
}
