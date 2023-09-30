//
//  lesson6-exercise2.cpp
//  lesson6-exercise2
//
//  Created by domain_management on 8/24/23.
//

#include <iostream>

using namespace std;

int main(){
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;
    
    int myNums1[ARRAY1_LEN] = {35, -3, 0};
    int myNums2[ARRAY2_LEN] = {20, -1};
    
    cout << "Adding each int in myNums1 to each in myNums2 in reverse order:" << endl;
    
    for(int index1 = (ARRAY1_LEN-1); index1 >= 0; --index1)
        for(int index2 = (ARRAY2_LEN-1); index2 >= 0; --index2)
            cout << myNums1[index1] << " + " << myNums2[index2] << " = " << myNums1[index1] + myNums2[index2] << endl;
    
    return 0;
}

