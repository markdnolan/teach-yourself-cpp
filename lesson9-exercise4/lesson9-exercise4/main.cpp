//
//  main.cpp
//  lesson9-exercise4
//
//  Created by domain_management on 9/4/23.
//

#include <iostream>

using namespace std;

class Circle {
    
private:
    const double Pi = 3.14159265;
    double radius;
    double circumference;
    double area;
    
public:
    Circle (double inputRadius = 0)
    :radius(inputRadius) {
    }
    
    double getCirc() {
        circumference = 2 * Pi * radius;
        return circumference;
    }
    
    double getArea() {
        area = Pi * radius * radius;
        return area;
    }
};

int main() {
    
    Circle firstCircle(1);
    Circle secondCircle(2);
    
    cout << "The circumference of circle 1 with radius 1 is " << firstCircle.getCirc() << " and it's area is " << firstCircle.getArea() << "." << endl;
    cout << "The circumference of circle 2 with radius 2 is " << secondCircle.getCirc() << " and it's area is " << secondCircle.getArea() << "." << endl;
    
    return 0;
}
