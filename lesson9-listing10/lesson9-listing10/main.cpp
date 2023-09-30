//
//  main.cpp
//  lesson9-listing10
//
//  Created by domain_management on 9/4/23.
//
/* A singleton class.
 A class that prevents copying, assignment and multiple instace creatio.
 NOTE: Only use where absolutely necessary, prevents future enhancements that require multiple instances
 */

#include <iostream>
#include <string>

using namespace std;

class President {
private:
    President() {};                                 // Private default constructor.
    President (const President&);                   // Private copy constructor.
    const President& operator = (const President&); // Assignment operator.
    
    string name;
    
public:
    static President& GetInstance() {
        // Static objects are constructed only once.
        static President onlyInstance;
        return onlyInstance;
    }
    
    string GetName() {
        return name;
    }
    
    void SetName(string InputName) {
        name = InputName;
    }
    
};

int main() {
    
    President& onlyPresident = President::GetInstance();
    onlyPresident.SetName("Abraham Lincoln");
    
    // Uncomment lines to see how compile failures prohibit duplicates.
    // President second;                    // Can't access constructor.
    // President* third = new President();  // Can't access constructor.
    // President fourth = onlyPresident;    // Can't access copy constructor.
    // onlyPresident = President::GetInstance().GetName();   // Can't access operator =.
    
    cout << "The name of the President is ";
    cout << President::GetInstance().GetName() << endl;
    return 0;
}
