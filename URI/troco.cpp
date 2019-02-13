#include <bits/stdc++.h>
using namespace std;

int main(){
   int N,nota=0;
   cin >> N;
   while(N>0){
   if(N>=100){
      N-=100;
      nota++;
   }else if(N>=50){
      N-=50;
      nota++;
   }else if(N>=25){
      N-=25;
      nota++;
   }else if(N>=10){
      N-=10;
      nota++;
   }else if(N>=5){
      N-=5;
      nota++;
   }else{
      N--;
      nota++;
   }
   }
   cout << nota << '\n';
   return 0;
}
