//
//  lesson7-listing11.cpp
//  lesson7-listing11
//
//  Created by domain_management on 8/27/23.
//
// using auto as the return type, automatic return type deduction.

#include <iostream>

using namespace std;

const double Pi = 3.14159265;

auto Area(double radius){
    return Pi * radius * radius;
}

int main(){
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;
    
    // Call function "Area".
    cout << "Area is: " << Area(radius) << endl;
    
    return 0;
}
