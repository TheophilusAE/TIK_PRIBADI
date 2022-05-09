#include <iostream>
using namespace std;

int main()
{
    int a;
    int f_a;
    int f_a1;
    int f_a2;
    
    cout << "PROGRAM DERET FIBONACI \n";
    cout << "Masukan nilai ke-n: ";
    cin >> a;
    
    f_a1 = 1;
    f_a2 = 0;
    f_a = f_a1 + f_a2;
    cout << f_a << " ";
    
    for (int b = 1; b < a; b++) {
        f_a = f_a1 + f_a2;
        f_a2 = f_a1;
        f_a1 = f_a;
        cout << f_a << " ";
    }
    cout << "\n";
    
    
    return 0;
}
