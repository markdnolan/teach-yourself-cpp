//
//  main.cpp
//  lesson12-listing9
//
//  Created by domain_management on 9/23/23.
//
/* A better "MyBuffer" class from lesson9-listing0 with a copy assignment operator (=)
 */

#include <iostream>
#include <algorithm>    // Note additional header file for src

using namespace std;

class MyBuffer {
    
private:
    int* myNums;
    unsigned int bufLength;
    
public:
    MyBuffer(unsigned int length) {
        bufLength = length;
        myNums = new int[length];   //alocate memory
    }

    // copy constructor, not included in book code but should be included in 'real' program.
    
    MyBuffer(const MyBuffer& src) {
        
        cout << "Copy constructor creating deep copy." << endl;
        bufLength = src.bufLength;
        myNums = new int [bufLength];
        copy(src.myNums, src.myNums + bufLength, myNums);   // Deep copy.
    }
    
    MyBuffer& operator = (const MyBuffer& src) { // Copy assignment.
        cout << "Copy assignment creating deep copy." << endl;
        if (myNums != src.myNums) {// Avoid copy to self
            if (myNums)
                delete myNums;
            
            bufLength = src.bufLength;
            myNums = new int [bufLength];
            copy(src.myNums, src.myNums + bufLength, myNums);   // Deep copy.
        }
        return *this;
    }
    
    ~MyBuffer() {
        delete[] myNums;    // Free allocated memory.
    }
    
    void SetValue(unsigned int index, int value) {
        if (index < bufLength)  // Check for bounds.
            *(myNums + index) = value;
    }
    
    void DisplayBuf() {
        for (unsigned int counter = 0; counter < bufLength; ++counter) {
            cout << *(myNums + counter) << " ";
        }
            cout << endl;
    }
};


int main() {
    cout << "How many integers would you like to store? ";
    unsigned int numsToStore = 0;
    cin >> numsToStore;
    
    MyBuffer buf(numsToStore);
    for (unsigned int counter = 0; counter < numsToStore; ++counter) {
        cout << "Enter value " << counter << " : ";
        int valueEntered = 0;
        cin >> valueEntered;
        buf.SetValue(counter,valueEntered);
    }
    
    MyBuffer anotherBuf(1);  // Initialize to contain just 1 int.
    anotherBuf = buf;
    anotherBuf.DisplayBuf();
    
    return 0; //    No crash, at destruction of buf.
}
