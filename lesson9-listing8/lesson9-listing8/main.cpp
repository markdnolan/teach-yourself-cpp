//
//  main.cpp
//  lesson9-listing8
//
//  Created by Mark Nolan on 9/3/23.
//
/* The problem of passing objects of a class such as myBuffer by value
 */

#include <iostream>

using namespace std;

class MyBuffer{
    
private:
    int* myNums;
    
public:
    MyBuffer(unsigned int length){
        
        cout << "Constructor allocates " << length << " integers." << endl;
        myNums = new int [length];  // Allocates memory.
    }
    
    ~MyBuffer(){
        cout << "Destructor releasing allocated memory." << endl;
        delete[] myNums;    // Free allocated memory.
    }
    
    // Other set and get functions to work with myNums.
};

void UseMyBuf(MyBuffer copyBuf){
    
    cout << "Copy of buf will be destroyed when function ends." << endl;
}

int main() {
    
    cout << "How many integers would you like to store?" << endl;
    unsigned int numsToStore = 0;
    cin >> numsToStore;
    
    MyBuffer buf(numsToStore);
    UseMyBuf(buf);
    /* Sends a copy of 'buf' to the function 'UseMyyBuf', which is held in the function as 'copyBuf'.
     This is fine EXCEPT that only the pointer myNums is copied NOT the memory pointed to by myNums.
     Thus there are 2 pointers pointing to the same area of memory.
     When 'UseMyBuf' is finished, the copied version of 'buf' ('copybuf') is destroyed, it's local to the function only, which invokes the destructor. This releases the memory pointed to by both pointers so, when the program ends and 'buf' is destroyed the pointer which is now pointing to nothing causes a crash. Likewise if we'd tried to use 'buf' in any other way, it will also have crash (as demonstrated with 2nd call to 'UseMyBuf'.
     */
    cout << "Everything fine at this point." << endl;
    UseMyBuf(buf);
    cout << "Are things still ok?" << endl;
    
    return 0;
}
