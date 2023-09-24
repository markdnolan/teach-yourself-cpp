//
//  main.cpp
//  lesson12-listing4
//
//  Created by domain_management on 9/20/23.
//

#include <iostream>

using namespace std;

class Date {
    
private:
    int day, month, year;
    string dateInString;
    
public:
    Date(int inMonth, int inDay, int inYear)
    : month(inMonth),day(inDay), year(inYear) {
    }
    
    Date operator + (int daysToAdd) {   // Binary addition.
        Date newDate (month, day + daysToAdd, year);
        return newDate;
    }
    
    Date operator - (int daysToSubtract) {  // Binary subtraction.
        return Date(month, day - daysToSubtract, year);
    }
    
    void DisplayDate() {
        cout << month << " / " << day << " / " << year << endl;
    }
};

int main() {
    Date holiday (12, 25, 2023);
    cout << "Christmas Day is on: ";
    holiday.DisplayDate();
    
    Date previousHoliday (holiday - 19);
    cout << "St. Nicholas Day is on: ";
    previousHoliday.DisplayDate();
    
    Date nextHoliday(holiday + 6);
    cout << "New Years Eve is on: ";
    nextHoliday.DisplayDate();
    
    cout << "Let's play with this idea..." << endl;
    
    Date holidayAfterThat(nextHoliday + 1);
    cout << "If this works, New Year's Day is on: ";
    holidayAfterThat.DisplayDate();
    
    return 0;
}
