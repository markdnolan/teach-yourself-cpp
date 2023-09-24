//
//  main.cpp
//  lesson12-listing10
//
//  Created by domain_management on 9/23/23.
//
/* Implementing a subscript operator ([]) in the "MyBuffer" class to allow random access to characters contained in "MyBuffer::myNums".
 */

#include <iostream>

using namespace std;

class MyBuffer {
    
private:
    int* myNums;
    unsigned int bufLength;
    unsigned int index;
    int value;
    
public:
    MyBuffer(unsigned int length) {
        bufLength = length;
        myNums = new int[length];   // Allocate memory.
    }
    
    // copy constructor and copy operator, not included in book code but should be included in 'real' program.
    
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
    
    const int& operator[] (unsigned int index) const {
        return myNums[index];
    }
    
    ~MyBuffer() {
        delete[] myNums;    // Free allocated memmory.
    }
    
    void SetValue (const unsigned int index,const int value) {
        myNums[index] = value;
    }
};

int main() {
    cout << "How many integers would you like to store? ";
    unsigned int numsToStore = 0;
    cin >> numsToStore;
    
    MyBuffer buf(numsToStore);
    for (unsigned int counter = 0; counter < numsToStore; ++counter) {
        cout << "Enter value " << (counter + 1) << ": ";
        int inputNum = 0;
        cin >> inputNum;
        buf.SetValue(counter, inputNum);
    }
    
    for (unsigned int counter = 0; counter < numsToStore; ++counter) {
        cout << "Value " << counter +1 << " is " << buf.operator[](counter) << endl;
    }
    
    return 0;
}
