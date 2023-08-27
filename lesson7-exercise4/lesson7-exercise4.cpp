//
//  lesson7-exercise4.cpp
//  lesson7-exercise4
//
//  Created by domain_management on 8/27/23.
//

#include <iostream>

using namespace std;

double Area(double radius, double Pi = 3.14){
    double area = Pi * radius * radius;
    return area;
}

int main(){
    
    double radius = 5.5;
    double area = Area(radius);
    cout << "Area is: " << area << endl;
    
    return 0;
}
