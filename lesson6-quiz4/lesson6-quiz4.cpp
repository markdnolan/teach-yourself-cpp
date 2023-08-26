//
//  lesson6-quiz4.cpp
//  lesson6-quiz4
//
//  Created by domain_management on 8/23/23.
//

#include <iostream>

using namespace std;

int main(){
    //  for(int counter=0; counter==10; ++counter) WRONG exit condition met when loop first executes.
    for(int counter=0; counter < 10; ++counter)
        cout << counter << " ";
    
    return 0;
}
