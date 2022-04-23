#include <iostream>

using namespace std;

int main () {
    
    float a;
    a = 1;
    
    // no limit 
    do { 
        cout << "true ";
        cout << a << endl;
    } while (a < 5);
    
    // limited (encrement or decrement)
    do { 
        cout << "true ";
        cout << a << endl;
        a++;
    } while (a < 5);
    
    // jangan copy 2 2 nya karna beda command beda output copy salah satu saja
    
     cout << "done" << endl;
    return 0;
}
