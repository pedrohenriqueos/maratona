#include <iostream>
using namespace std;

int main(){
   int N,P,X,Y,cont=0;
   cin >> N >> P;
   if((N>=1 and N<=1000)&&(P>=1 and P<=1000)){
      for(int i=1;i<=N;i++){
         cin >> X >> Y; 
         if((X>=0 and X<=400)&&(Y>=0 and Y<=400)){
            if((X+Y)>=P) 
               cont++;
         }
      }
      cout << cont << endl;
   }

   return 0;
}
