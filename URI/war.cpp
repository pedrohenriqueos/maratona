#include <bits/stdc++.h>
using namespace std;

int main(){
   int N,soma1=0,soma2=0,saida;
   cin >> N;
   int A[N];
   for(int i=0;i<N;i++)
      cin >> A[i];
   for(int i=0;i<N;i++)
      soma1 += A[i];
   soma1 /=2;
   for(int j=0;soma2!=soma1;j++){
      soma2 += A[j];
      saida = j+1;
   }
   cout << saida <<"\n";
   return 0;
}
