//
//  lesson8-listing18.cpp
//  lesson8-listing18
//
//  Created by domain_management on 9/2/23.
//
// function that calculates square returned in a parameter by reference.

#include <iostream>

using namespace std;

void Square(int& number){
    
    number *= number;
    
    return;
}

int main(){
    
    cout << "Enter a number you wish to square: ";
    int number =0;
    cin >> number;
    
    Square(number);
    cout << "Square is: " << number << endl;
    
    return 0;
}
