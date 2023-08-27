//
//  lesson7-exercise1.cpp
//  lesson7-exercise1
//
//  Created by domain_management on 8/27/23.
//
// Overloaded fuctions for volume of a sphere or cylinder

#include <iostream>

using namespace std;

double const Pi = 3.14159265;

double Volume(double radius){
    return (4 * Pi * radius * radius * radius) / 3;
}

double Volume(double radius, double height){
    return Pi * radius * radius * height;
}

int main(){
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;
    
    cout << "Do you want the volume of a sphere (s) or a cylinder (c), enter (s/c): ";
    char userSelection = 's';
    cin >> userSelection;
    
    if (userSelection == 'c'){
        cout << "Enter the height of the cylinder: ";
        double height = 0;
        cin >> height;
        
        cout << "The volume of the cylinder, radius " << radius << " height " << height << " is: " << Volume(radius, height) << endl;
    }
    else{
        cout << "The volume of the sphere, radius " << radius << " is " << Volume(radius);
    }
    
    cout << endl;
    
    return 0;
}
