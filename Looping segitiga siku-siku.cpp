#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    
    cout << "masukan panjang pola: ";
    cin >> a;
    
    cout << "Pola 1\n";
    
    for (b = 1; b <= a; b++) {
        for (c = 1; c <= b; c++) {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "Pola 2\n";
    
    for (b = 1; b <= a; b++) {
        for (c = a; c >= b; c--) {
            cout << "*";
        }
        cout << endl;
    }
    
   cout << "Pola 3\n";
    
    for (b = 1; b <= a; b++) {
        for (c = 1; c < b; c++) {
            cout << " ";
        }
        for (d = a; d >= b; d--) {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "Pola 4\n";
    
    for (b = 1; b <= a; b++) {
        for (c = a; c > b; c--) {
            cout << " ";
        }
        for (d = 1; d <= b; d++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
