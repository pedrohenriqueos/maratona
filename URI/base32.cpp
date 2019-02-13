#include <bits/stdc++.h>
using namespace std;

int main(){
   unsigned long long int N;
   string S; 
   while(cin >> N){
   if(N==0)
      break;
   while(N>0){
   if(N%32<10){
   S += ((N%32)+48);
   }
   else{
   S += ((N%32)+55);
   }
   N/=32;
   }
   for(int i= S.size()-1;i>=0;i--)
   cout << S[i]; 
   cout << '\n';
   S.clear();
   }
   cout << "0\n";
   return 0;
}
