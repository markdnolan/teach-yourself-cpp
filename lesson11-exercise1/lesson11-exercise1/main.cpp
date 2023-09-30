//
//  main.cpp
//  lesson11-exercise1
//
//  Created by domain_management on 9/17/23.
//

#include <iostream>

using namespace std;

class Shape {
    
public:
    virtual void Area()=0;
    virtual void Print()=0;
};

class Circle: public Shape {
    
public:
    
    void Area() {
        cout << "Calculate the area of a circle." << endl;
    }
    void Print() {
        cout << "Print the circle results." << endl;
    }
};

class Triangle: public Shape {
    
public:
    
    void Area() {
        cout << "Calculate the area of a triangle." << endl;
    }
    void Print() {
        cout << "Print the triangle results." << endl;
    }
};

int main() {
    
    Circle myCircle;
    Triangle myTriangle;
    
    myCircle.Area();
    myCircle.Print();
    myTriangle.Area();
    myTriangle.Print();
    
    return 0;
}
