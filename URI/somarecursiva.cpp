#include <bits/stdc++.h>
using namespace std;

int soma(int n){
 if(n)
   return n+soma(n-1);
 return 0;
}

int main(){
   int N;
   cin >> N;
   cout << soma(N)<<"\n";
   return 0;
}
