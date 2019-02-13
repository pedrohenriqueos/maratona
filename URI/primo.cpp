#include <bits/stdc++.h>
using namespace std;

bool eh_primo(int x){
   int cont;
   for(int i=1;i<=x;i++){
   if(x%i==0)
      cont++;
   }
   if(cont==2)
      return true;
   return false;
}
int main(){
   int x;
   cin >> x;
   (eh_primo(x)) ? cout << "S\n" : cout << "N\n";
}
