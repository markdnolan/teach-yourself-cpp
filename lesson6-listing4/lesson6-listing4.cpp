//
//  lesson6-listing4.cpp
//  lesson6-listing4
//
//  Created by domain_management on 8/23/23.
//
// Using grouped if....else construct

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
    
    if (dayInput == Sunday)
        cout << "Sunday was named after the Sun.";
    else if (dayInput == Monday)
        cout << "Monday was named after the Moon.";
    else if (dayInput == Tuesday)
        cout << "Tuesday was named after Tiu.";
    else if (dayInput == Wednesday)
        cout << "Wednesday is named after Wotin (Odin).";
    else if (dayInput == Thursday)
        cout << "Thursday is named after Thor.";
    else if (dayInput == Friday)
        cout << "Friday is named after Frea.";
    else if (dayInput == Saturday)
        cout << "Saturday is named after Saturn.";
    else
        cout << "Wrong input, execute again.";
    
    cout << endl;
    
    return 0;
}
