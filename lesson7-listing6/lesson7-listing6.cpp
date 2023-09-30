//
//  lesson7-listing6.cpp
//  lesson7-listing6
//
//  Created by domain_management on 8/27/23.
//
// Using multiple return statements in one function

#include <iostream>

using namespace std;

const double Pi = 3.14159265;

void QueryAndCalculate(){
    cout << "Enter Radius: ";
    double radius = 0;
    cin >> radius;
    
    cout << "Area: " << Pi * radius * radius << endl;
    
    cout << "Do you wish to calculate circumference (y/n)? ";
    char calcCircum = 'n';
    cin >> calcCircum;
    
    if (calcCircum == 'n')
        return;
    
    cout << "Circumference: " << 2 * Pi * radius << endl;
    return;
    
}

int main(){
    QueryAndCalculate();
    
    return 0;
}
