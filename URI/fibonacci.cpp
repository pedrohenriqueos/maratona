#include <bits/stdc++.h>
using namespace std;

int fib(int n){
  if(n>1)
     return fib(n-1)+fib(n-2);
  return 1;
}

int main(){
   int N;
   cin >> N;
   cout << fib(N) << '\n';
   return 0;
}
