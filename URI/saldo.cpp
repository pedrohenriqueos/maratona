#include <iostream>
using namespace std;

int main(){
   int N,S,valor,menor;
   cin >> N >> S;
   if((N>=0 and N<=30)&&(S>=-1000 and S<=1000)){
   menor = S;
   for(int i=1;i<=N;i++){
      cin >> valor;
      if(valor>=-1000 and valor<=1000){
         S += valor;
         if(menor>S)
            menor = S; 
      }
   }
   cout << menor <<endl;
   }

   return 0;
}
