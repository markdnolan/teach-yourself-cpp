//
//  main.cpp
//  lesson12-listing7
//
//  Created by domain_management on 9/23/23.
//
/* demonstrates implementing the <, <=, >, and >= operators.
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
    
    bool operator == (const Date& compareTo) {
        return ((day == compareTo.day) && (month == compareTo.month) && (year == compareTo.year));
    }
    
    bool operator < (const Date& compareTo) {
        if (year < compareTo.year)
            return true;
        else if ((year == compareTo.year) && (month < compareTo.month))
            return true;
        else if ((year == compareTo.year) && (month == compareTo.month) && (day < compareTo.day))
            return true;
        else
            return false;
    }
    
    bool operator <= (const Date& compareTo) {
        if (this -> operator == (compareTo))
            return true;
        else
            return this -> operator < (compareTo);
    }
    
    bool operator > (const Date& compareTo) {
        return !(this -> operator < (compareTo));
    }
    
    bool operator >= (const Date& compareTo) {
        if (this -> operator == (compareTo))
            return true;
        else
            return this -> operator > (compareTo);
    }
    
    void DisplayDate() {
        cout << month << " /" << day << " /" << year << endl;
    }
};


int main() {
    Date holiday1 (12, 25, 2023);
    Date holiday2 (12, 31, 2023);
    
    cout << "holiday1 is: ";
    holiday1.DisplayDate();
    cout << "holiday2 is: ";
    holiday2.DisplayDate();
    
    if (holiday1 < holiday2)
        cout << "Operator < : holiday1 happens first" << endl;
    else
        cout << "Operator < : holiday2 happens first." << endl;
    
    if (holiday1 > holiday2)
        cout << "Operator > : holiday1 happens later." << endl;
    else
        cout << "Operator > : holiday2 happens later." << endl;
    
    if (holiday1 <= holiday2)
        cout << "Operator <= : holiday1 happens on or before holiday2." << endl;
    else
        cout << "Operator <= : holiday2 happens on or before holiday1." << endl;
    
    if (holiday1 >= holiday2)
        cout << "Operator >= : holiday1 happens on or after holiday2." << endl;
    else
        cout << "Operator >= : holiday2 happens on or after holiday1." << endl;
    
    return 0;
}
