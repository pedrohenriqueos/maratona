#include <bits/stdc++.h>
using namespace std;

int main(){
   int N;
   cin >> N;
   double V[N];
   for(int i=0;i<N;i++)
      cin >> V[i];
   cout.precision(4);
   cout.setf(ios::fixed);
   for(int i=0;i<N;i++){
      cout << sqrt(V[i])<<'\n';
     
   }
   return 0;
}
