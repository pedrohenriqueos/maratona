#include <iostream>
using namespace std;

int main(){
   int N,cont=0;
   string g1,g2;

   cin >> N;
    
   cin >> g1;
   cin >> g2;
   if(N>=1 and N<=80)
   if((g1.size()==N)&&(g2.size()==N)){
   for(int i=0;i<N;i++)
      if(g1[i]==g2[i])
         cont++;
   cout << cont << endl; 
   }
   return 0;
}
