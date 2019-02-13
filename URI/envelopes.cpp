#include <iostream>
using namespace std;

int main(){
   int N;
   cin >> N;
   int a[N];
   for(int i=0;i<N;i++)
      cin >> a[i];
  
   int quant = a[0];
   for(int i=0;i<N;i++)
      if(quant > a[i]){
         quant = a[i];
      }
   cout << quant <<"\n";  
   return 0;
}
