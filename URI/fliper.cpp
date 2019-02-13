#include <iostream>
using namespace std;

int main(){
   int P,R;
   cin >> P >> R;
   if(P==1){
      if(R==0)
         cout << "B\n"; 
      else
         cout << "A\n";
   }else
      cout << "C\n";
   return 0;
}
