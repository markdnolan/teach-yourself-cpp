//
//  lesson8-listing10.cpp
//  lesson8-listing10
//
//  Created by domain_management on 9/2/23.
//
// Using constants to govern what a function can change in a passed pointer

#include <iostream>

using namespace std;

void CalcArea (
    const double* const ptrPi,      // constant pointer to constant data
    const double* const ptrRadius,  // i.e. no change allowed to radius
    double* const ptrArea)          // can change data pointed to but not address
    {
        // check pointers for validity befoe using!
        // The logoical AND (&&) converts each pointer to type bool which means it is either NULL (0) or NON-NULL (TRUE) (1), unless a poiter is set to NULL it will return TRUE, thus the next line makes sure that all 3 pointers have a value the is not "NULL".
    if (ptrPi && ptrRadius && ptrArea)
        *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
    return;
}

int main(){
    
    const double Pi = 3.1415925;
    
    cout << "Enter the radius of a circle: " ;
    double radius = 0;
    cin >> radius;
    
    double area = 0;
    CalcArea (&Pi, &radius, &area);
    
    cout << "Area is = " << area << endl;
    
    return 0;
}
