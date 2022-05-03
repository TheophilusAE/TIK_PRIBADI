#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "masukan angka: ";
    cin >> a;
    
    cout << "masukan batas perkalian: ";
    cin >> c;
    
    for ( b = 0 ; b <= c  ; ++b) {
        cout << a << " * " << b << " = " << a*b << endl;
    }

    return 0;
}
