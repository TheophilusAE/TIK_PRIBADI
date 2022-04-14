#include <iostream>

using namespace std;

int main () {
    
    int a = 1;

// loop no break   
    while (a < 10) {
        cout << "true" << endl;
    }

//loop with limit    
    while (a < 10) {
        cout << "true" << endl;
        a = 11;
    }
 
//loop with increment/decrement
    while (a < 10) {
        cout << "true" << endl;
        a += 4;
    }
    
}
