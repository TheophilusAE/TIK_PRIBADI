#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string next;
    
    while (true) {
        cout << "Roll dice ? ( yes / no ): ";
        cin >> next;
        
        if (next == "yes") {
            cout << 1 + (rand () % 6) << endl;
        }
        else if (next == "no") {
            break;
        }
        else {
            cout << "yes or no only\n";
        }
    }
    

    return 0;
}
