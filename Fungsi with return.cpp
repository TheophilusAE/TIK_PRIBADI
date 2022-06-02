#include <iostream>
#include <cmath>

using namespace std;

/* format syntax :

    tipe data _ nama data (daerah input) {
        
        program
        
    }
*/
    
int kuadrat (int x) {
    int y;
    y = pow (x,2);
    return y;
}

int penjumlahan (int a, int b) {
    int c;
    c = a + b;
    return c;
}

int pengurangan (int d, int e) {
    int f;
    f = d - e;
    return f;
}

int main() {
    string pilihan;
    
    cout << "----------selamat datang-----------" << endl;
    cout << "\n";
   
    cout << "(penjumlahan/pengurangan/pangkat)\n";
    cout << "pilih operasi hitung : ";
    cin >> pilihan;
    cout << "\n\n";
    if (pilihan == "pangkat") {
        int x,hasil;
        cout << "nilai kuadrat dari : ";
        cin >> x ;
    
        hasil = kuadrat (x);
        cout << "kuadrat dari " << x << " adalah " <<hasil;
    }
    else if (pilihan == "penjumlahan") {
        int a,b,hasil2;
        cout << "masukan nilai a: ";
        cin >> a;
        cout << "masukan nilai b: ";
        cin >> b;
        
        hasil2 = penjumlahan (a,b);
        cout << "hasil penjumlahan dari " << a << "+" << b << " adalah " << hasil2;
    }
    else if (pilihan == "pengurangan") {
        int a,b,hasil3;
        cout << "masukan nilai a: ";
        cin >> a;
        cout << "masukan nilai b: ";
        cin >> b;
        
        hasil3 = pengurangan (a,b);
        cout << "hasil pengurangan dari " << a << "-" << b << " adalah " << hasil3;
    }


    return 0;
}
