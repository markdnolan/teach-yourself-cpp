//
//  lesson7-exercise5.cpp
//  lesson7-exercise5
//
//  Created by domain_management on 8/27/23.
//
// function type void (no return value) that calculates
// area & circumference of a circle when supplied with radius - return by reference.

#include <iostream>

using namespace std;

double const Pi = 3.14159265;

void CircleAttributes(double radius, double& area, double& circumference){
    area = Pi * radius * radius;
    circumference = 2 * Pi * radius;
    return;
}

int main(){
    cout << "Enter the radius of a circle: ";
    double radius = 0;
    cin >> radius;
    
    double area = 0;
    double circumference = 0;
    CircleAttributes(radius, area, circumference);
    cout << "The circumference of a circle, radius " << radius << " is " << circumference << " and the area is " << area << " ." << endl;
    
    return 0;
}
