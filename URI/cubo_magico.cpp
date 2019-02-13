#include <bits/stdc++.h>
using namespace std;

int main(){
   int N,contl=0,contc=0,contf=0;
   cin >> N;
   int M[N][N],linha[N],coluna[N],diagonal=0,diagonali=0;
   for(int i=0;i<N;i++)
      for(int j=0;j<N;j++)
         cin >> M[i][j];
   for(int i=0;i<N;i++){
      linha[i]=0;
      coluna[i]=0;
   }
   for(int j=0;j<N;j++)
      for(int i=0;i<N;i++)
         linha[j] += M[j][i];
   for(int j=0;j<N;j++)
      for(int i=0;i<N;i++)
         coluna[j] += M[i][j];
    for(int i=0;i<N;i++)
      diagonal += M[i][i];
   int j=0;
   for(int d=N-1;d>=0;d--,j++)
      diagonali += M[d][j];
   for(int i=1;i<N;i++)
      if(linha[i-1]==linha[i])
         contl++;
   for(int i=1;i<N;i++)
      if(coluna[i-1]==coluna[i])
         contc++;
   if(linha[0]==coluna[0])
         contf++;
   if(diagonal==diagonali)
         contf++;
   if(linha[0]==diagonal)
         contf++;
   contf += contl + contc;

   (contf==2*N+1) ? cout << diagonal << "\n" : cout << "-1\n"; 
   return 0;
}  
