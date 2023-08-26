//
//  lesson6-exercise6.cpp
//  lesson6-exercise6
//
//  Created by domain_management on 8/24/23.
//
// Bug buster on while loops

#include <iostream>

using namespace std;

int main(){
    cout << "Enter a number between 0 and 4: " << endl;
    int input = 0;
    cin >> input;
    switch (input){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            cout << "Valid input." << endl;
            break;
        default:
            cout << "Invalid input." << endl;
            break;
    }
    
    return 0;
}
