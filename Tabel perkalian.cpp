#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<< " masukan angka positif : ";
    cin >> a;
    
    for (int b = 1 ; b <= 30 ; ++b) {
        cout << a << " * " << b << " = " << a*b << endl;
    }

    return 0;
}

// NOTE : untuk menentukan batas perkalian ganti batas dari b
