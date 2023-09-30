//
//  main.cpp
//  lesson12-listing12
//
//  Created by domain_management on 9/23/23.
//
/*  The "myBuffer" class with a move constructor and move assignment operator in addition to a copy constructor and copy assignment operator.
 
    Move constructors ensure that temporary values (rvalues that don't exist beyond the statement) aren't wastefully copied.
 */

#include <iostream>
#include <algorithm>

using namespace std;

class MyBuffer {
    
private:
    int* myNums;
    unsigned int bufLength;
    
public:
    
    MyBuffer(unsigned int length) {
        cout << "Constructing a new instance with " \
        << length << " elements." << endl;
        bufLength = length;
        myNums = new int[length];   // Allocate memory.
    }
    
    MyBuffer(const MyBuffer& src) {   // Copy constructor.
        cout << "Copy constructor creating deep copy." << endl;
        bufLength = src.bufLength;
        myNums = new int[bufLength];
        copy(src.myNums, src.myNums + bufLength, myNums);   // Deep copy.
    }
    
  
    MyBuffer(MyBuffer&& src) {    // Move constructor.
        cout << "Move constructor transferring ownership." << endl;
        if (src.myNums != NULL) {
            bufLength = src.bufLength;
            myNums = src.myNums;    // Take ownership
            
            src.myNums = NULL;
            src.bufLength = 0;
        }
    }

    
    MyBuffer& operator = (const MyBuffer& src) {  // Copy assignment.
        cout << "Copy assignment creating deep copy." << endl;
        if (myNums != src.myNums) {  // Avoid copy to self.
            if (myNums)
                delete myNums;
            
            bufLength = src.bufLength;
            myNums = new int [bufLength];
            copy(src.myNums, src.myNums + bufLength, myNums);   // Deep copy.
        }
        
        return *this;
    }
    

    MyBuffer& operator = (MyBuffer&& src) { // Move assignment.
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

    
    MyBuffer operator + (const MyBuffer& bufToAppend) {
        cout << "Operator '+' concatenating." << endl;
        MyBuffer newBuf(this->bufLength + bufToAppend.bufLength);
        
        for (unsigned int counter = 0; counter < bufLength; ++counter)
            newBuf.SetValue(counter, *(myNums + counter));
        
        for (unsigned int counter = 0; counter < bufToAppend.bufLength; ++counter)
            newBuf.SetValue(counter + bufLength, *(bufToAppend.myNums + counter));
        
        return newBuf;
    }
    
    ~MyBuffer () {
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
    MyBuffer buf1(buf1Length);
    for (unsigned int counter = 0; counter < buf1Length; counter++)
        buf1.SetValue(counter, counter+1);
    unsigned int buf2Length = 15;
    
    MyBuffer buf2(buf2Length);
    for (unsigned int counter =0; counter < buf2Length; counter++)
        buf2.SetValue(counter, counter + buf1Length + 1);
    
    cout << "Concatenation at object instantiation: " << endl;
    MyBuffer buf3(buf1 + buf2);
    
    buf3.DisplayBuf();
    
    MyBuffer bufSum(1);
    
    cout << "Concatenation at assignment: " << endl;
    bufSum = buf1 + buf2 + buf3;
    
    return 0;
}
