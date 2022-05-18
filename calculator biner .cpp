#include <iostream>
using namespace std;

int main() {
 
  int a[10];
  int b,c,d,e,hasil;
  char aritmatika;
 
  cout << " Welcome " << endl;
 
 // user input
  cout << "masukan nilai 1: ";
  cin >> b;
  
  cout << "pilih operator (+,-,/,*):";
  cin >> aritmatika;
  
  cout << "masukan nilai 2: ";
  cin >> c;
  
  cout << "hasil: ";
  cout << b << aritmatika << c;
  
  if (aritmatika == '+') {
      hasil = b + c;
  }
  else if (aritmatika == '-'){
      hasil = b - c;
  }
  else if (aritmatika == '/'){
      hasil = b / c;
  }
  else if (aritmatika == '*'){
      hasil = b * c;
  }
  else {
      cout << "error" << endl;
  }
  cout << "=" << hasil << endl;
 
  for (d = 0; hasil > 0; d++) {
      a[d] = hasil % 2;
      hasil = hasil/2;
  }

  cout << "Angka binernya adalah: ";
 
  for(d=d-1 ;d>=0 ;d--) {
    cout << a[d];
  }
  cout << endl;
 
  return 0;
}
