//
//  main.cpp
//  lesson9-listing7
//
//  Created by domain_management on 9/3/23.
//
/* A simple class that encapsulates a pointer to ensure deallocation via the destructor.
 
 NOTE: Nowhere in main() is there a 'new' or 'delete' operator, all memory management is handled by the class object.
    The costructor & destructor make sure that everything is created and removed in a n orderly manner, simplifying the management of memory.
 */

#include <iostream>

using namespace std;

class MyBuffer{
    
private:
    int* myNums;
    
public:
    MyBuffer(unsigned int length){
        cout << "Constructor allocated " << length << " integers." << endl;
        myNums = new int[length];   // Allocate memory.
        }
    
    ~MyBuffer(){
        cout << "Destructor releasing allocated memory." << endl;
        delete[] myNums;    // Free allocated memeory.
    }
    
    // Other set and get functions to work with myNums
    
};

int main() {
    
    cout << "How many integers would you like to store?" << endl;
    unsigned int numsToStore = 0;
    cin >> numsToStore;
    
    MyBuffer buf(numsToStore);
    
    return 0;
}
