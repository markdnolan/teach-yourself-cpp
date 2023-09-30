//
//  main.cpp
//  lesson9-listing11
//
//  Created by domain_management on 9/4/23.
//
/* A class that only allows creation of objects on the free store.
 This type of class doesn't allow use of the stack, which is useful for classes that use a lot of memory, such as database classes, since they preserve stack space & prevent overflows.
 Use with caution, the main program can't access the detructor, so need a public function that needs to be called after each instance is destroyed to reclaim the memory.
 */

#include <iostream>

using namespace std;

class MonsterDB {
    
private:
    ~MonsterDB() {};    // Private destructor prevents instances on the stack.
    
public:
    static void DestroyInstance(MonsterDB* pInstance){
        delete pInstance;   // Member can invoke private destructor.
    }
    
    void DoSomething(){
        // Sample empty member method.
    }
};

int main() {
    
    MonsterDB* myDB = new MonsterDB();  // on free store
    myDB -> DoSomething();
    
    // Uncomment next line to see compile failure.
    // delete myDB; // Private detructor can't be invoked.
    
    // Use static member method to release memory.
    MonsterDB::DestroyInstance(myDB);
    
    return 0;
}
