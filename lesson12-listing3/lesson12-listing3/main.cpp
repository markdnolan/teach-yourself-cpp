//
//  main.cpp
//  lesson12-listing3
//
//  Created by domain_management on 9/20/23.
//
/* Using the samrt pointer "unique_ptr" to manage a dyanamically alloced instance of "date" class.
 */

#include <iostream>
#include <memory>   // New include to use unique-ptr.

using namespace std;

class Date {
    
private:
    int day, month, year;
    string dateInString;
    
public:
    Date(int inMonth, int inDay, int inYear)
    : month(inMonth), day (inDay), year(inYear) {
    }
    
    void DisplayDate() {
        cout << month << " / " << day << " / " << year << endl;
    }
};

int main() {
    
    unique_ptr<int> smartIntPtr(new int);
    *smartIntPtr = 42;
    
    // Use smart pointer type like an int*
    cout << "Integer value is: " << *smartIntPtr << endl;
    
    unique_ptr<Date> smartHoliday (new Date(12, 25, 2023));
    cout << "The new instance of date contains: ";
    
    // Use "smartHoliday" just as you would a "Date*".
    smartHoliday -> DisplayDate();
    
    return 0;   // Smart pointers do the deallocation for you.
}
