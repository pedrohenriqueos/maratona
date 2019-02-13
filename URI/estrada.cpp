#include <iostream>
using namespace std;

int main(){
   int C,painel=0;
   char P;
   cin >> C;
   if(C>=1 and C<=1000000){
   for(int i=0;i<C;i++){ 
      cin >> P;
   switch(P){
      case 'A':
         painel++;
         break;
      case 'P':
         painel +=2;
         break;
      case 'C':
         painel +=2;
         break;
   } 
   }
   cout << painel <<endl;
   }
   return 0;
}
