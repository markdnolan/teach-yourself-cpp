//
//  lesson6-listing7.cpp
//  lesson6-listing7
//
//  Created by domain_management on 8/23/23.
//
// Using goto - ILLUSTRATIVE ONLY, DON'T EVER UYSE THIS!

#include <iostream>

using namespace std;

int main(){
    Start:      // Create a label
               
        cout << "Enter two integers: " << endl;
        int num1 = 0, num2 = 0;
        cin >> num1;
        cin >> num2;
    
        cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    
        cout << "Do you wish to perform another operation (y/n)?" << endl;
        char repeat = 'y';
        cin >> repeat;
    
        if (repeat == 'y')
            goto Start;
    
    cout << "Goodbye!" << endl;
    
    return 0;
}
