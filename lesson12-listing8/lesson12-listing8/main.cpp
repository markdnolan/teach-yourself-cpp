//
//  main.cpp
//  lesson12-listing8
//
//  Created by domain_management on 9/23/23.
//
/* Programming a "<=>" operator for the class "Date" to compare two dates.
 */

#include <iostream>
#include <compare>  // New include for 'spacehip' "<=>" three-way compare operator.

using namespace std;

class Date {
    
private:
    int day, month, year;
    
public:
    Date (int inMonth, int inDay, int inYear)
    : month(inMonth), day(inDay), year(inYear) {
    }
    
    auto operator <=>(const Date& rhs) const {
        if (year < rhs.year)
            return std::strong_ordering::less;
        else if (year > rhs.year)
            return std::strong_ordering::greater;
        else {
            // years are identical, compare months
            if (month < rhs.month)
                return std::strong_ordering::less;
            else if (month > rhs.month)
                return std::strong_ordering::greater;
            else {
                // months are identical, compare days
                if (day < rhs.day)
                    return std::strong_ordering::less;
                else if (day > rhs.day)
                    return std::strong_ordering::greater;
                else
                    return std::strong_ordering::equal;
            }
        }
    }
};

int main() {
    cout << "Enter a date: month, day & year:" << endl;
    int month, day, year;
    cin >> month;
    cin >> day;
    cin >> year;
    Date date1(month, day, year);
    
    cout << "Enter another date: month, day & year:" << endl;
    cin >> month;
    cin >> day;
    cin >> year;
    Date date2(month, day, year);
    
    auto result = date1 <=> date2;
    
    if (result < 0)
        cout << "Date 1 occurs before date 2." << endl;
    else if (result > 0)
        cout << "Date 1 occurs after date 2." << endl;
    else if (result == 0)
        cout << "The dates are the same." << endl;
    else
        cout << "Something wierd happened!" << endl;
    
    return 0;
}
