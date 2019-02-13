#include <iostream>
using namespace std;

int main(){
   char O;
   double n1,n2;
 
   cin >> O;
   cin >> n1 >> n2;
 
   cout.precision(2);
   cout.setf(ios::fixed);
   switch(O){ 
      case 'M':
         cout << n1*n2 <<endl;
         break;
      case 'D':
         cout << n1/n2 <<endl;
         break;
   }
   
   return 0;
}
