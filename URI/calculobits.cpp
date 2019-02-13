//Essa eu não saberia maldito pow(2,1000)
//Estudar a função max() 'deve retornar o maior dos dois números, por obviedade'

#include <bits/stdc++.h>
#define MAXN 1010
using namespace std;

int main(){
   int M,N,tam,num1[MAXN],num2[MAXN], resp[MAXN];
   cin >> M >> N;
   int X[M],Y[N];
   for(int i=1;i<=M;i++)
      cin >> num1[i];
   for(int i=1;i<=N;i++)
      cin >> num2[i];
   for(int i=1;i<=max(N,M);i++)
      resp[i] = num1[i]+num2[i];
   for(int i=max(N,M);i>0;i--)
      if(resp[i]>1){
         resp[i] -=2;
         resp[i-1]++;
      }
   for(int i=1;i<=max(N,M);i++)
      if(resp[i])
         tam=i;
   for(int i=1;i<=tam;i++)
      cout << resp[i] << " ";  
   cout << '\n'; 

   return 0;
}
