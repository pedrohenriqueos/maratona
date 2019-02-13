#include <iostream>
using namespace std;

int main(){
   int N,cont=0;
   cin >> N;
   if(N>=1 and N<=50){
   int V[N];
   for(int i=0;i<N;i++){
   cin >> V[i];
   }
   for(int i=0;i<N;i++){
    if(i>0)
     if(V[i-1]==1)
       cont++;
    if(V[i]==1)
       cont++;
    if(i<N-1)
     if(V[i+1]==1)
       cont++;
     cout << cont <<endl;
     cont=0;
   }
   }
   return 0;
}
