#include <iostream>

using namespace std;

int main () {

int a = 3;
int b = 1;
 
 bool hasil1, hasil2, hasil3, hasil4, hasil5;
 
// operator logika : not, and, or

// not ( ! )

cout << "untuk not" << endl;
hasil1 = !(a == 3);
cout << hasil1 << endl;

// and (&&): kedua nilai harus benar agar hasil true ( 1 )

cout << "untuk and" << endl;
hasil2 = (a == 3) and (b == 2);
cout << hasil2 << endl;

// or ( || ) : salah satu nilai true maka hasil true ( 1 )

cout << "untuk or" << endl;
hasil3 = (a == 3) or (b == 2);
cout << hasil3 << endl;

return 0;
}
