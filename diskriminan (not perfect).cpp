#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int a,b,b2,c,d;
   
   cout  << "masukan nilai a: ";
   cin >> a;
   
   cout << "masukan nilai b: ";
   cin >> b;
   
   cout << "masukan nilai c: ";
   cin >> c;
   
   if (a = 0) {
       return 0;
   }
   
   b2 = pow (b,2);
   
   d = b2 - 4 * a * c;
   
   cout << "D = " << d << endl;
   
   /*
   if (d = 0) {
       cout << "akar kembar";
   }
   if else (d < 0){
       cout << "akar real";
   }
   if else (d > 0){
       cout << "akar imajiner";
   }
  
  */
    return 0;
}
