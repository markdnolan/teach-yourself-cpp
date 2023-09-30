//
//  lesson8-listing19.cpp
//  lesson8-listing19
//
//  Created by domain_management on 9/2/23.
//
/* Using a const reference to ensure that the calling function can't modify a value sent by reference.
*/

#include <iostream>

using namespace std;

void Square(const int& number, int& result){
    
    result = number * number;
    return;
}

int main(){
    
    cout << "Enter a number you wish to square: ";
    int number = 0;
    cin >> number;
    
    int square = 0;
    Square(number, square);
    cout << "Square of " << number << " = " << square << endl;
    
    return 0;
}
