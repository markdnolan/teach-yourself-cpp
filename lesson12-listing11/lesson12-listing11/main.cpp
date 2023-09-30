//
//  main.cpp
//  lesson12-listing11
//
//  Created by domain_management on 9/23/23.
//
/* A function object created using the () operator.
 */

#include <iostream>
#include <string>

using namespace std;

class Display {
    
public:
    void operator () (string input) const {
        cout << input << endl;
    }
};

int main() {
    Display displayFuncObj;
    
    //  Equivalent to "displayFuncObj.operator () ("Display the string!")";.
    displayFuncObj("Display the string!");
    
    return 0;
}
