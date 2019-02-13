#include <bits/stdc++.h>
using namespace std;

int main(){
   int N,X[3];
   cin >> N;
   for(int i=0;i<3;i++)
      cin >> X[i];
   int cont = 3;
   while(cont>1){
   for(int i=1;i<3;i++){
      int aux;
      if(X[i-1]>X[i]){
         aux = X[i-1];
         X[i-1] = X[i];
         X[i] = aux;
      }
   }
   cont--;
   }
   int sum=0,control=0;
   for(int i=0;i<3;i++){
      sum += X[i];
      control =i;
      if(sum>N)
         break;
      if(i==2)
         control =3;
   }
   cout << control << '\n';
   return 0;
}
