//Accepted finalmente \o/
#include <bits/stdc++.h>
using namespace std;

int main(){
   char D;
   string N;
   int control=0,f=0;
   while(cin >> D >> N){
   if(D== '0' and N=="0")
      break;
   string S,P;
   for(int i=0;i<N.size();i++){
   if(N[i]!=D)
      S+=N[i];
   }
   for(int i=0;i<S.size();i++){
   if(f==0)
   if(S[i]=='0'){
      control++;
   }else{
     f=1;
   }
   }
   if(control!=0){
   for(int i=control;i<S.size();i++)
      P+=S[i];
   }else
      for(int i=0;i<S.size();i++)
         P+=S[i];
   if(P!="")  
   cout << P <<'\n';
   else
   cout << "0\n";
   control=f=0;    
   cin.ignore();
   }
   return 0;
}
