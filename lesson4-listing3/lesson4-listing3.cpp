//
//  lesson4-listing3.cpp
//  lesson4-listing3
//
//  Created by domain_management on 8/20/23.
//
// Accessing elements in a multi-dimensional array.

#include <iostream>

using namespace std;

int main(){
    //NOTE: use of \ to continue a single statement over multiple lines.
    int threeRowsThreeColumns[3][3] = \
    {{-501, 205, 2016},{989, 101, 206},{303, 456, 596}};
    
    cout << "Row 0: " << threeRowsThreeColumns[0][0] << " " << threeRowsThreeColumns[0][1] << " " << threeRowsThreeColumns[0][2] << endl;
    cout << "Row 1: " << threeRowsThreeColumns[1][0] << " " << threeRowsThreeColumns[1][1] << " " << threeRowsThreeColumns[1][2] << endl;
    cout << "Row 2: " << threeRowsThreeColumns[2][0] << " " << threeRowsThreeColumns[2][1] << " " << threeRowsThreeColumns[2][2] << endl;
    
    return 0;
}
