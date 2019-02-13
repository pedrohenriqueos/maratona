#include <bits/stdc++.h>
using namespace std;

double media_vetor(int n,int v[]){
   double soma=0;
   for(int i=0;i<n;i++)
      soma += v[i];
   soma /=n;
   return soma;
}

int main(){
   int n;
   cin >> n;
   int v[n];
   for(int i=0;i<n;i++)
      cin >> v[i];
   
   cout<<fixed<<setprecision(2)<<media_vetor(n,v)<<"\n";
   return 0;
}
