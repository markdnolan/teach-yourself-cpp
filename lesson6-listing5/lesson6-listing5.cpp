//
//  lesson6-listing5.cpp
//  lesson6-listing5
//
//  Created by domain_management on 8/23/23.
//
// Using switch..case, break and default.

#include <iostream>

using namespace std;

int main(){
    enum DaysOfWeek{
        Sunday = 0,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    
    cout << "Find what days of the week are named after." << endl;
    cout << "Enter a number for a day (Sunday = 0): ";
    
    int dayInput = Sunday;  //Initialize to Sunday
    cin >> dayInput;
    
    switch(dayInput){
        case Sunday:        //NOTE: Use of colon in case statements.
            cout << "Sunday was named after the Sun.";
            break;
        case Monday:
            cout << "Monday was named after the Moon.";
            break;
        case Tuesday:
            cout << "Tuesday was named after Tiu.";
            break;
        case Wednesday:
            cout << "Wednesday is named after Wotin (Odin).";
            break;
        case Thursday:
            cout << "Thursday is named after Thor.";
            break;
        case Friday:
            cout << "Friday is named after Frea.";
            break;
        case Saturday:
            cout << "Saturday is named after Saturn.";
            break;
        default:
            cout << "Wrong input, execute again.";
            break;  // Not really required but good practice
    }
    
    cout << endl;
    
    return 0;
}
