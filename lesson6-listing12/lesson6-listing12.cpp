//
//  lesson6-listing12.cpp
//  lesson6-listing12
//
//  Created by domain_management on 8/23/23.
//
// Using a range based for.. loop over arrays to display array contents

#include <iostream>
#include <string>

using namespace std;

int main(){
    int someNums[] = { 1, 101, -1, 40, 2040};
    
    for (const int aNum : someNums)
        // Only 1 expression within for here, step through array
        //  setting 'aNum' equal to next value in array each pass
        // size of array governs number of times loop is executed
        // values held in array govern values held in array counter
        cout << aNum << ' ';
    cout << endl;
    
    for (auto anElement : { 5, 222, 110, -45, 2017})
        // NOTE: setting for counter to type "auto" to make this work for any arrays
        // containing any data type.
        cout << anElement << ' ';
    cout << endl;
    
    char charArray[] = { 'h', 'e', 'l', 'l', 'o'};
    for (auto aChar : charArray)
        cout << aChar << ' ';
    cout << endl;
    
    double moreNums[] = { 3.14, -1.3, 22, 10101 };
    for (auto anElement : moreNums)
        cout << anElement << ' ';
    cout << endl;
    
    return 0;
}
