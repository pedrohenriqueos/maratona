#include <iostream>
using namespace std;

int main(){
   int P,N, F,soma=0;
   cin >> P >> N;
   soma = P;
   for(int i=1;i<=N;i++){
      cin >> F;
      soma += F;
      if(soma>100)
      soma =100;
      if(soma <0)
      soma =0; 
   }
   cout << soma <<endl;

   return 0;
}
