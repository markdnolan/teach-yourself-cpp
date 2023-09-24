//
//  main.cpp
//  lesson12-listing2
//
//  Created by domain_management on 9/17/23.
//
/* Implementing the conversion operatot "const char* for the "date" class
 */

#include <iostream>
#include <string>
#include <sstream>  // New include for ostringstream

using namespace std;

class Date {
    
private:
    int day, month, year;
    string dateInString;
    
public:
    Date (int inMonth, int inDay, int inYear) : month (inMonth) , day (inDay), year (inYear) {};
    
    operator const char*() {
        ostringstream formattedDate;    // Assists string constructon.
        formattedDate << month << " / " << day << " / " << year;
        
        dateInString = formattedDate.str();
        return dateInString.c_str();
    }
};

int main() {
    
    Date holiday (12, 25, 2023);    //  December 25th, 2023
    
   cout << "Christmas Day is on: " << holiday <<endl;
    
    string strHoliday (holiday); //OK!
    strHoliday = Date (11, 11, 2021); //Also OK!
    
    return 0;
}

