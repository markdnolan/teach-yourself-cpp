//
//  lesson3-ex4.cpp
//  lesson3-ex4
//
//  Created by domain_management on 8/20/23.
//

#include<iostream>

/* Definition of function to create constant.
 This function evaluated at compile time so that constant is already fixed at runtime.
 */

consteval float Div_Eval(float a, float b){
    return a/b;
}

/* Constant evaluation function call outside of any other function so that constant is global.
 Note that function is called using constants (22,7) so that the output must be a constant.
 */
 
constexpr float pi = Div_Eval(22,7);


// Function to calculate area of a cirle.
int CircleArea(int circleRadius = 0){
    int circleArea = pi * circleRadius * circleRadius;
    return circleArea;
}

// Function to calculate circumference of a cirle.
int CircleCircumference(int circleRadius = 0){
    int circleCircumference = 2 * pi * circleRadius;
    return circleCircumference;
    }

int main(){
    
    using namespace std;
    
    cout << "Enter a whole number radius for a circle: ";
    int enteredRadius = 1;
    cin >> enteredRadius;
    
    //call function to calculate the area
    int calculatedArea = CircleArea(enteredRadius);
    
    // call function to clculate the circumference
    int calculatedCircumference = CircleCircumference(enteredRadius);
    
    cout << "Pi has been claculated as " << pi << endl;
    
    cout << "The cicumference of a circle radius " << enteredRadius << " is " << calculatedCircumference << " and, the area is " << calculatedArea << endl;
    return 0;
}
