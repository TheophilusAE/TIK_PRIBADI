#include <iostream>

using namespace std;

int main() {
 
  float a,b,hasil;
  char aritmatika;
 
  cout << " Welcome " << endl;
 
 // user input
  cout << "masukan nilai 1: ";
  cin >> a;
  
  cout << "pilih operator (+,-,/,*):";
  cin >> aritmatika;
  
  cout << "masukan nilai 2: ";
  cin >> b;
  
  cout << "hasil: ";
  cout << a << aritmatika << b;
  
  if (aritmatika == '+') {
      hasil = a + b;
  }
  else if (aritmatika == '-'){
      hasil = a - b;
  }
  else if (aritmatika == '/'){
      hasil = a / b;
  }
  else if (aritmatika == '*'){
      hasil = a * b;
  }
  else {
      cout << "error" << endl;
  }
  cout << "=" << hasil << endl;
    return 0;
}
