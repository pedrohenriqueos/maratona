//Qual é o erro?
#include <bits/stdc++.h>
using namespace std;

long long int hanoi(int n){
   return pow(2,n)-1;  
}

int main(){
   int N;
   while(cin >> N){
   if(N==0)
      break;
   cout << "Teste " << N << "\n" << hanoi(N) << "\n\n";
   }
   return 0;
}
