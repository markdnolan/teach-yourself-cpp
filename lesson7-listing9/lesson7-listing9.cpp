//
//  lesson7-listing9.cpp
//  lesson70listing9
//
//  Created by domain_management on 8/27/23.
//
// Using reference parameters in functions.

#include <iostream>

using namespace std;

const double Pi = 3.1416;

// output parameter result by reference
void Area(double radius, double& result){
    result = Pi * radius * radius;
    return;
}

int main(){
    cout << "Enter radius: ";
    double radius = 0;
    cin >> radius;
    
    double areaFetched = 0;
    Area(radius, areaFetched);
    // areaFetched returns the area, this allows a function to return more than 1 value
    // since return can only return a single value.
    
    cout << "The area is: " << areaFetched << endl;
    
    return 0;
}
