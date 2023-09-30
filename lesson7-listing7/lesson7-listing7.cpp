//
//  lesson7-listing7.cpp
//  lesson7-listing7
//
//  Created by domain_management on 8/27/23.
//
// Using overloaded functions.

#include <iostream>

using namespace std;

const double Pi = 3.14159265;

double Area(double radius); // For circle.
double Area(double radius, double height);  // For cylinder

int main(){
    cout << "Enter z for cylinder, c for circle: ";
    char userSelection = 'z';
    cin >> userSelection;
    
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;
    
    if (userSelection == 'z'){
        cout<< "Enter height: ";
        double height = 0;
        cin >> height;
        
        // Invoke overloaded variant of Area for cylinder
        cout << "Area of cylinder is: " << Area(radius, height) << endl;
    }
    else
        cout  << "Area of circle is: " << Area(radius) << endl;

return 0;

}

// for circle
double Area(double radius){
    return Pi * radius * radius;
}

// overloaded for cylinder
double Area(double radius,double height){
    // reuse the area of a circle
    return 2 * Area(radius) + (2 * Pi * radius * height);
}

    
