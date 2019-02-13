#include <bits/stdc++.h>
using namespace std;

int det(int mat[][3]){
   int b=2,c=1,d=1,det;
   double aux,auxc,aux1=1.0,aux2=1.0,aux3=1.0;
   for(int a=0;a<=2;a++){
      aux1 *=mat[a][a];
      if(a==2)
         c=0;
      aux2 *=mat[a][c];
      c++;
      aux3 *=mat[a][b];
      b = 0;
      if(a==1)
         b++;
   }
   aux = aux1+aux2+aux3;
   aux1 = aux2 = aux3 = 1.0;
   b = 2;
   c = 0;
   for(int a=0;a<=2;a++){
      aux1 *=mat[a][b];
      b--;
      aux2 *=mat[a][c];
      c +=2;
      if(a==1)
         c = 1;
      aux3 *=mat[a][d];
      if(a==1)
         d = 3;
      d--;
   }
   auxc = aux1+aux2+aux3;
   det = aux - auxc;
   return det;
}

int main(){
   int m[3][3];
   for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
         cin >> m[i][j];
   cout << det(m) << "\n";
}
