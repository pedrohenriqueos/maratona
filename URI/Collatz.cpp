#include <bits/stdc++.h>
using namespace std;

int coll(int n){
   int cont=0;
   while(n!=1){
   n = n%2 ? 3*n+1 : n/2;
   cont++;
   }
   return cont;
}

int main(){
   int N;
   cin >> N;
   cout << coll(N) << endl;

   return 0;
}
