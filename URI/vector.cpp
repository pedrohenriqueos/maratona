#include <bits/stdc++.h>
using namespace std;

int main(){
   int N,C,M;
   vector<int> V;
   cin >> N;
   for(int i=0;i<N;i++){ 
      cin >> C;
      V.push_back(C);
   }
   cin >> M;
   for(int j=0;j<M;j++){
      cin >> C;
      for(int i=0;i<N;i++)
         if(C==V[i]){
            V.erase(V.begin()+i);
            break;
         }
   }
   for(int i=0;i<(int)V.size();i++){
      cout << V[i];
      if(i<V.size()-1)
         cout << " ";
      else
         cout << '\n';
   }  
   return 0;
}
