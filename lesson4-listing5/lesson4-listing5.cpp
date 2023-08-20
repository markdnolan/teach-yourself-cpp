//
//  lesson4-listing5.cpp
//  lesson4-listing5
//
//  Created by domain_management on 8/20/23.
//
// C-Style Character Strings

#include <iostream>

using namespace std;

int main(){
    char sayHello[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};
    cout << sayHello << endl;
    cout << "Size of array; " << sizeof(sayHello) << endl;
    /* same sizeof() function that was used for size of variables,
     returns number of bytes used ->
     'char' variables are 1 byte long so sizeof(<char_array>) returns number elements.
     */
    
    cout << "Replacing space with null." << endl;
    sayHello[5] = '\0';
    cout << sayHello << endl;
    cout << "Size of array: " << sizeof(sayHello) << endl;
    
    return 0;
}
