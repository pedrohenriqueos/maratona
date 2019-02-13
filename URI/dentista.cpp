#include  <bits/stdc++.h>
#define MAXN 10100
using namespace std;

struct compro{
  int ini,fim;
};
compro consul[MAXN];
bool comp(compro a,compro b){
  return a.fim<b.fim;

}
int N,s,livre;
int main(){
   cin >> N;
   for(int a=0;a<N;a++){
      cin >> consul[a].ini >> consul[a].fim;
   }
   sort(consul,consul+N,comp);
   for(int i=0;i<N;i++){
      if(consul[i].ini>=livre){       
         s++;
         livre=consul[i].fim;
      }
   }
   cout << s << '\n';
   return 0;
}
