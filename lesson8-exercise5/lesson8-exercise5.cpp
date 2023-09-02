//
//  lesson8-exercise5.cpp
//  lesson8-exercise5
//
//  Created by domain_management on 9/2/23.
//

#include <iostream>

using namespace std;

int main(){
    
    int* pointToAnInt = new int;
    *pointToAnInt = 0;
    int* pNumberCopy = new int;
    pNumberCopy = pointToAnInt;
    *pNumberCopy = 30;
    cout << "The value at pointToAnInt is: " << *pointToAnInt << endl;
    // delete pNumberCopy;
    delete pointToAnInt;
    
    return 0;
    
}

