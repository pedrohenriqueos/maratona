#include <iostream>
using namespace std;

int main(){
   int L1,A1,L2,A2;
   cin >> L1 >> A1;
   cin >> L2 >> A2;
   if((L1*A1)>(L2*A2)){
      cout << "Primeiro\n";
   }else if((L1*A1)<(L2*A2)){
      cout << "Segundo\n";    
   }else
      cout << "Empate\n";
   return 0;
}
