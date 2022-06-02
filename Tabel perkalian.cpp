#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "masukan angka: ";
    cin >> a;
   
    
    for ( b = 0 ; b <= 10  ; ++b) {
        cout << a << " x " << b << " = " << a*b << endl;
    }

    return 0;
}

// NOTE : untuk menentukan batas perkalian ganti batas dari b
