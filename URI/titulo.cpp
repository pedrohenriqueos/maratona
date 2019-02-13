//Erro???
#include <bits/stdc++.h>
using namespace std;

string title(string F){
   for(int i=0;i<F.size();i++)
      F[i]=tolower(F[i]);
   for(int i=0;i<F.size();i++){
   if(i==0)
      F[0]=toupper(F[0]);
   if(F[i]==' ')
      F[i+1]=toupper(F[i+1]);
   }
   return F;
}
int main(){
   string F;
   getline(cin,F);
   cout<<title(F)<<"\n";
   return 0;
}
