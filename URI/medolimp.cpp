#include <iostream>
using namespace std;

int main(){
   int O1,P1,B1,O2,P2,B2;
   cin >> O1 >> P1 >> B1;
   cin >> O2 >> P2 >> B2;
   if(O1>O2){
      cout << "A\n";
   }else if(O1==O2){
      if(P1>P2){
         cout << "A\n";
      }else if(P1==P2){
         if(B1>B2)
            cout << "A\n";
         else
            cout << "B\n";
      }else    
         cout << "B\n";
   }else
      cout << "B\n";
   return 0;
}
