//
//  lesson5-listing5.cpp
//  lesson5-listing5
//
//  Created by domain_management on 8/22/23.
//
// Logical AND (&&) and logical OR (||)

#include <iostream>

using namespace std;

int main(){
    cout << "Enter true(1) of false(0) for 2 operands: " << endl;
    bool op1 = false, op2 = false;
    cin >> op1;
    cin >> op2;
    
    cout << op1 << " AND " << op2 << " = " << (op1 && op2) << endl;
    cout << op1 << " OR " << op2 << " = " << (op1 || op2) << endl;
    
    return 0;
}
