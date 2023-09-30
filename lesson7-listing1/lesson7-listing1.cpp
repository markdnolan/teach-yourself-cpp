//
//  lesson7-listing1.cpp
//  lesson7-listing1
//
//  Created by domain_management on 8/26/23.
//
// Two functions

#include <iostream>

using namespace std;

const double Pi = 3.14159265;

// Function declarations (prototypes)
double Area(double radius);
double Circumference(double radius);

int main(){
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;
    
    // Call function "Area"
    cout << "Area is " << Area(radius) << endl;
    
    // Call function "Circumference"
    cout << "Circumference is " << Circumference(radius) << endl;
    
    return 0;
}

// Function definitions (implementations)
double Area(double radius){
    return Pi * radius * radius;
}

double Circumference(double radius){
    return 2 * Pi * radius;
}
