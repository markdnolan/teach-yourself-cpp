//
//  lesson5-listing8.cpp
//  lesson5-listing8
//
//  Created by domain_management on 8/22/23.
//
// Using bitwise operators NOT, AND, OR and XOR

#include <iostream>
#include <bitset>
// Bitset is used to DISPLAY the output in binary, operations are done using integers.

using namespace std;

int main(){
    cout << "Enter a number between 0 and 255: ";
    unsigned short inputNum = 0;
    cin >> inputNum;
    
    bitset<8> inputBits (inputNum);
    cout << inputNum << " in binary is " << inputBits << endl;
    
    cout << "Bitwise NOT (~)." << endl;
    bitset<8> bitwiseNOT = (~inputNum);
    cout << "~" << inputBits << " = " << bitwiseNOT << endl;
    
    cout << "Bitwise AND (&), with 00001111." << endl;
    bitset<8> bitwiseAND = (0x0F & inputNum); // 0x0F is hex for 00001111
    cout << "00001111 & " << inputBits << " = " << bitwiseAND << endl;
    
    cout << "Bitwise OR (|), with 00001111." << endl;
    bitset<8> bitwiseOR = (0x0F | inputNum);
    cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;
    
    cout << "Bitwise XOR (^), with 00001111." << endl;
    bitset<8> bitwiseXOR = (0x0F ^ inputNum);
    cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << endl;
    
    return 0;
}
