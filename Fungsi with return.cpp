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

int perkalian (int f, int g) {
    int h;
    h = f * g;
    return h;
}

int pembagian (int i, int j) {
    int k;
    k = i / j;
    return k;
}

int pembagian2 (int l,int m) {
    int n;
    n = l % m;
    return n;
}

int main() {
    string pilihan;
    
    cout << "----------selamat datang-----------" << endl;
    cout << "\n";
   
    cout << "(penjumlahan/pengurangan/pangkat/perkalian/pembagian/modulus)\n";
    cout << "pilih operasi hitung : ";
    cin >> pilihan;
    cout << "\n";
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
    else if (pilihan == "perkalian") {
        int a,b,hasil4;
        cout << "masukan nilai a: ";
        cin >> a;
        cout << "masukan nilai b: ";
        cin >> b;
        
        hasil4 = perkalian (a,b);
        cout << "hasil perkalian dari " << a << "x" << b << " adalah " << hasil4;
    }
    else if (pilihan == "pembagian") {
        int a,b,hasil5;
        cout << "masukan nilai a: ";
        cin >> a;
        cout << "masukan nilai b: ";
        cin >> b;
        
        hasil5 = pembagian (a,b);
        cout << "hasil pembagian dari " << a << ":" << b << " adalah " << hasil5;
    }
    else if (pilihan == "modulus") {
         int a,b,hasil6;
        cout << "masukan nilai a: ";
        cin >> a;
        cout << "masukan nilai b: ";
        cin >> b;
        
        hasil6 = pembagian2 (a,b);
        cout << "hasil modulus dari " << a << "%" << b << " adalah " << hasil6;
    }
    return 0;
}
