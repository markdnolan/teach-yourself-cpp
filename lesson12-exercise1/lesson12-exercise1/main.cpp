//
//  main.cpp
//  lesson12-exercise1
//
//  Created by domain_management on 9/24/23.
/*  A conversion operator for the class "Date" that converts the date it holds into an integer.
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
    
    /*  This is unary conversion operator
        Syntax here is:
            return_type operator operator_type() {      - explicit > return type, int > opertator_type
            ....implementation....                      - (month * 1000000) + (day * 10000) + year
            }
    */
     explicit operator int() {   // explicit keyword prevents the type of the result from being changed from an integer.
        return ((month * 1000000) + (day * 10000) + year);
    }
    
    void DisplayDate() {
        cout << month << " /" << day << " /" << year << endl;
    }
};
    
        
int main() {
    Date holiday (12, 25, 2023);
    
    holiday.DisplayDate();
    
    cout << "Christmas Day as an integer is: " << holiday.operator int() << endl;;
    
    return 0;
}
