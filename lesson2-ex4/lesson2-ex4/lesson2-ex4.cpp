//
//  lesson2-ex4.cpp
//  lesson2-ex4
//
//  Created by Mark Nolan on 8/18/23.
//

#include <iostream>

using namespace std;

// Declare a function
int DemoConsoleOutput();

int main(){
    // Call i.e. invoke the function.
    DemoConsoleOutput();
    
    return 0;
}

// Define i.e. implement the previously declared function.
int DemoConsoleOutput(){
    cout << "This is a string literal." << endl;
    cout << "Writing number 5: " << 5 << endl;
    cout << "Performing division, 10 / 5 = " << 10/5 << endl;
    cout << "Pi is 22 / 7 = " << 22.0/7 << endl;
    cout << "Performing subtraction, 15 - 7 = " << 15-7 << endl;
    cout << "Performing multiplication, 4 x 9 = " << 4*9 <<endl;
    return 0;
}
