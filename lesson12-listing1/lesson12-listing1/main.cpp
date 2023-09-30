//
//  main.cpp
//  lesson12-listing1
//
//  Created by domain_management on 9/17/23.
//
/* A calendar class that handles the day,month and year and allows incrementing and decrementing of days.
    This demonstrates that the increment and decrement operators have been redefined within the context of the "Date" class to act on the Day or the month.
 */

#include <iostream>

using namespace std;

class Date {
    
private:
    int day, month, year;
    
public:
    Date (int inMonth, int inDay, int inYear) : month (inMonth) , day (inDay), year (inYear) {};
    
    Date& operator ++ () {  //prefix increment
        ++day;
        return *this;
    }
    
    Date& operator -- () {
        --day;
        return *this;
    }
    
    // postfix differs from prefix operator in return-type and parameters
    Date operator ++ (int) { // postfix increment
        Date copy(month, day, year);
        day++;
        return copy;    // copy of instance before increment returned
    }
    
    Date operator -- (int) { // postfix increment
        Date copy(month, day, year);
        day--;
        return copy;    // copy of instance before decrement returned
    }
    
    void DisplayDate() {
        cout << month << " / " << day << " / " << year << endl;
    }
};

int main() {
    
    Date holiday (12, 25, 2023);    //  December 25th, 2023
    
    cout << "The date object is initialized to ";
    holiday.DisplayDate();
    
    ++holiday;  // Move the date ahead by one day.
    cout << "Date after prefix-increment is: ";
    holiday.DisplayDate();
    
    --holiday;  // Move the date backward by a day.
    cout << "Date after a prefix-decrement is: ";
    holiday.DisplayDate();
    
    holiday++;  // Move the date ahead by one day.
    cout << "Date after postfix-increment is: ";
    holiday.DisplayDate();
    
    holiday--;  // Move the date backward by a day.
    cout << "Date after a postfix-decrement is: ";
    holiday.DisplayDate();
    
    return 0;
}
