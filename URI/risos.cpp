#include <iostream>
using namespace std;

int main(){
   string A,B;
   int a,cont=0,conte=0;
   cin >> A;
   for(int i=0;i<A.size();i++){
   switch(A[i]){
      case 'a':
      case 'e': 
      case 'i': 
      case 'o': 
      case 'u':
         B+=A[i];
         break;   
   }
   }
   a=B.size()-1;
   for(int x=0;x<B.size();x++){
   if(a==x)
      break;
   if(B[x]==B[a]){
      cont++;
   }else{
     conte=1;
     cout << "N\n";
     break; 
   }
   a--;
   }
   if(conte==0)
      cout << "S\n";
   
   return 0;
}
