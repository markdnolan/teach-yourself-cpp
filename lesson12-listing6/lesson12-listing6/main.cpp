//
//  main.cpp
//  lesson12-listing6
//
//  Created by domain_management on 9/23/23.
//
/* Demonstrating the == and != operators.
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
    // bool, type of result from redefinition
    // operator, keyword, we're redefining the operator that follows
    // == operator, being redefined
    // (const Date& compareTo), "compareTo" is a copy of input parameter, of type "Date" that can't be changed
    // const {...} result of evaluation inside braces can't be changed by any dwonstream logic, do this so that the != operator override can't change the value of the == operator override
    
    bool operator == (const Date& compareTo) const {
        return ((day == compareTo.day)
                && (month == compareTo.month)
                && (year == compareTo.year));
    }
    
    bool operator != (const Date& compareTo) const {
        // this is &object, so if object is "holiday1" then this is &holiday1
        // so this-> is the value at address pointed to by &holiday1
        // so this->operator==(compareTo)) means the result of the operator == override in this instance of the class using the input parameter compareTo, which is a constant copy of typw "Date".
        return !(this->operator==(compareTo));
    }
    
    void DisplayDate() {
        cout << month << " / " << day << " / " << year << endl;
    }
};


int main() {
    Date holiday1 (12, 25, 2023);
    
    /* holiday1 is a class of type "Date" with local variables
     month set to 12
     day set to 25
     year set to 2023
     */
    
    Date holiday2 (12, 31, 2021);
    
    cout << "Holiday 1 is: ";
    holiday1.DisplayDate();
    cout << "Holiday 2 is: ";
    holiday2.DisplayDate();
    
    if (holiday1 == holiday2)
        cout << "Equality operator: The two are on the same day." << endl;
    else
        cout  << "Equality operator: The two are on different days." << endl;
    
    if (holiday1 != holiday2)
        cout  << "Inequality operator: The two are on different days." << endl;
    else
        cout << "Inequality operator: The two are on the same day." << endl;
    
    return 0;
}
