//
//  lesson7-listing4.cpp
//  lesson7-listing4
//
//  Created by domain_management on 8/26/23.
//
// Function parameters with default values

#include <iostream>

using namespace std;

// Function declaration with default arguement.
// default argument must be specified in declaration, if done in implementation, build will fail,
// since we'll call function with a single parameter (line 34) & compliler won't know to use default value.
double Area(double radius, double pi = 3.14);

int main(){
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;
    
    cout << "Pi is 3.14, do you wish to change this (y/n)? ";
    char changePi = 'n';
    cin >> changePi;
    double circleArea = 0;
    if (changePi == 'y'){
        cout << "Enter new value of pi: ";
        double newPi = 3.14;
        cin >> newPi;
        circleArea = Area(radius, newPi);
    }
    else{
        circleArea = Area(radius);  //Ignore second parameter, use default value.
    }

    cout << "Area is " << circleArea << endl;
    
    return 0;
}

// Function definitions (implementations)
double Area(double radius, double pi){
    return pi * radius * radius;
}
