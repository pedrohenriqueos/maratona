#include <iostream>
using namespace std;

int main(){
   int N,A,soma=0,aux=0;
   cin >> N;
   if(N>=1 and N<=1000){
   for(int i=1;i<=N;i++){
      cin >> A;
      if(A>=0 and A <= 1000000){
         soma += A;
         if(aux==0) 
         if(soma>=1000000)
            aux =i;    
      }
   }
   cout << aux <<endl;
   }
   return 0;
}
