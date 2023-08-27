//
//  lesson7-listing2-2.cpp
//  lesson7-listing2-2
//
//  Created by domain_management on 8/26/23.
//
// Modified lesson2-listing2 to use functions created in lesson2-listing1

#include <iostream>

using namespace std;

const double Pi = 3.14159265;

// Previous function declarations and definitions
double Area(double radius){
    return Pi * radius * radius;
}

double Circumference(double radius){
    return 2 * Pi * radius;
}
// Declaration contains two parameters
// Moved implementation to  directly below declaration to eliminate duplicate lines
// This must be implemented below previously used functions since it calls them
double SurfaceArea(double radius, double height){
    double area = 2 * Area(radius) + (Circumference(radius) * height);
    return area;
}

int main(){
    cout << "Enter the radius of a cylinder: ";
    double radius = 0;
    cin >> radius;
    
    cout << "Enter the height of a cylinder: ";
    double height = 0;
    cin >> height;
    
    cout << "Surface area: " << SurfaceArea(radius, height) << endl;
    
    return 0;
}
