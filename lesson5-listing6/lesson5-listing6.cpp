//
//  lesson5-listing6.cpp
//  lesson5-listing6
//
//  Created by domain_management on 8/22/23.
//
// Logical NOT (!) and Logical AND (&&) operators in "if" statements for decision making.

#include <iostream>

using namespace std;

int main(){
    cout << "Use Boolean vlaues (0 or 1) to answer." << endl;
    cout << "Is it raining? ";
    bool isRaining = false;
    cin >> isRaining;
    
    cout << "Are there buses running? ";
    bool busesRunning = false;
    cin >> busesRunning;
    
    // Conditional statement uses logical AND and NOT.
    if (isRaining && !busesRunning)
        cout << "You can't go to work!" << endl;
    else
        cout << "You can go to work." << endl;
    
    if (isRaining && busesRunning)
        cout << "Take an umbrella." << endl;
    
    if ((!isRaining) && busesRunning)
        cout << "Enjoy the sunshine and have a nice day!" << endl;
    
    return 0;
}
