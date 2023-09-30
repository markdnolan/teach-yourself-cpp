//
//  lesson4-listing7.cpp
//  lesson4-listing7
//
//  Created by domain_management on 8/20/23.
//
// Using std::string to initializ, store user input, copy, concatenate
// and determine the lenght of a string

#include<iostream>
#include<string>

using namespace std;

int main(){
    string greetString ("Hello std::string!");
    cout << greetString << endl;
    
    cout << "Enter a line of text: ";
    string firstLine;
    getline(cin, firstLine);
    
    cout << "Enter another: ";
    string secondLine;
    getline(cin, secondLine);
    
    cout << "Result of concatenation: " << endl;
    string concatString = firstLine + " " + secondLine;
    cout << concatString << endl;
    
    cout << "Copy of concatenated string: " << endl;
    string aCopy;
    aCopy = concatString;
    cout << aCopy << endl;
    
    cout << "Length of concat string: " << concatString.length() << endl;
    
    return 0;
}
