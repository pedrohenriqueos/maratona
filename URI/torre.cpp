//Meu código,  achei mais organizado,mas Limit Exceeded ;(
#include <bits/stdc++.h>
using namespace std;

int main(){
   int N,maior=0;
   cin >> N;
   int X[N][N],soma[N][N];
   for(int i=0;i<N;i++)
      for(int j=0;j<N;j++)
         cin >> X[i][j];
   for(int i=0;i<N;i++)
      for(int j=0;j<N;j++){
         for(int x=0;x<N;x++){
            if(x==0){
            soma[i][j] = X[i][x];  
            soma[i][j] += X[x][j];
            }else{
            soma[i][j] += X[i][x];  
            soma[i][j] += X[x][j];
            }
         }
      soma[i][j] -= 2*X[i][j];  
      }
   for(int i=0;i<N;i++)
      for(int j=0;j<N;j++)
         if(soma[i][j]>maior)
            maior = soma[i][j];
   cout << maior <<'\n';
   return 0;
}
//Código Aceito ;(
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
   int N,maior=0;
   cin >> N;
   int X[N][N],linha[N],coluna[N];
   for(int i=0;i<N;i++)
      for(int j=0;j<N;j++)
         cin >> X[i][j];
   for(int i=0; i<N; i++)
      for(int j=0; j<N; j++){
         if(j==0)
            linha[i] = X[i][j];
         else
            linha[i]+= X[i][j];
      }
   for(int i=0; i<N; i++)
      for(int j=0; j<N; j++)
         if(j==0)
            coluna[i] = X[j][i];
         else
            coluna[i]+= X[j][i];
   for(int i=0; i<N; i++)
      for(int j=0; j<N; j++)
         if(linha[i]+coluna[j]-2*X[i][j]>maior)
         maior = linha[i]+coluna[j]-2*X[i][j];
   cout << maior <<'\n';
   return 0;
}
*/
