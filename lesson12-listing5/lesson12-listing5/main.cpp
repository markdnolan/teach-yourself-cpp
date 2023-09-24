//
//  main.cpp
//  lesson12-listing5
//
//  Created by domain_management on 9/23/23.
//
/* Defining the operators += and -= to add or subtract days in the calendar, given an integer input.
 */

#include <iostream>

using namespace std;

class Date {
    
private:
    int day, month, year;
    
public:
    Date(int inMonth, int inDay, int inYear)
    : month(inMonth), day(inDay), year(inYear) {
    }
    
    void operator += (int daysToAdd) {    // Addition assignment.
        day += daysToAdd;
    }
    
    void operator-= (int daysToSubtract) {  // Subtraction assignment.
        day -= daysToSubtract;
    }
    
    void DisplayDate() {
        cout << month << " / " << day << " / " << year << endl;
    }
};

    int main() {
        Date holiday(12, 25, 2023);
        cout << "Christmas Day is on: ";
        holiday.DisplayDate();
        
        cout << "Christmas Day -= 19 gives: ";
        holiday -= 19;
        holiday.DisplayDate();
        
        cout << "Christmas Day += 25 gives: ";
        holiday += 25;
        holiday.DisplayDate();
        
    return 0;
}
