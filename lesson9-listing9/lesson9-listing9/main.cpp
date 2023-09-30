//
//  main.cpp
//  lesson9-listing9
//
//  Created by Mark Nolan on 9/3/23.
//
/* Solving the problem of passing objects of a class such as myBuffer by using deep copy.
 */

#include <iostream>

using namespace std;

class MyBuffer{
    
private:
    int* myNums;
    unsigned int bufLength;
    
public:
    MyBuffer(unsigned int length){
        
        bufLength = length;
        cout << "Constructor allocates " << length << " integers." << endl;
        myNums = new int [length];  // Allocates memory.
    }
    
    MyBuffer(const MyBuffer& src) { // copy constructor
        
        cout << "Copy constructor creating deep copy." << endl;
        bufLength = src.bufLength;
        myNums = new int [bufLength];
        copy(src.myNums, src.myNums + bufLength, myNums);   // Deep copy.
    }
    
    ~MyBuffer(){
        cout << "Destructor releasing allocated memory." << endl;
        delete[] myNums;    // Free allocated memory.
    }
    
    void SetValue( unsigned int index, int value) {
        if (index < bufLength)  // Check for bounds.
            *(myNums + index) = value;
    }
    
    void DisplayBuf() {
        
        cout << "The pointer for this copy is: " << hex << myNums << endl;
        for (unsigned int counter = 0; counter < bufLength; ++counter)
            cout << dec << *(myNums + counter) << " ";
        
        cout << endl;
    }
};

void UseMyBuf(MyBuffer copyBuf){
    
    cout << "Displaying copy of buf: " << endl;
    copyBuf.DisplayBuf();
}

int main() {
    
    cout << "How many integers would you like to store?" << endl;
    unsigned int numsToStore = 0;
    cin >> numsToStore;
    
    MyBuffer buf(numsToStore);
        
    for (unsigned int counter = 0; counter < numsToStore; ++counter) {
        cout << "Enter value " << (counter+1) << " : ";
        int valueEntered = 0;
        cin >> valueEntered;
        buf.SetValue(counter, valueEntered);
    }
                     
    cout << "Numbers in the buffer buf: ";
    buf.DisplayBuf();
    
    UseMyBuf(buf);  // Function receives a deep copy of buf.
    
    return 0;   // No crash at destruction of buf.
}

