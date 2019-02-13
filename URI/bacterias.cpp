//ESSA FOI HARD
#include<bits/stdc++.h>
using namespace std;

int main(){
   int N, D, C,melhor=0;
   cin >> N;
   double bacterias;
   for(int i=0;i<N;i++){
      cin >> D >> C;
   if(bacterias<C*log10(D)){
      bacterias=C*log10(D);
      melhor =i;
   }
   }
   cout << melhor << "\n";
   return 0;
}
