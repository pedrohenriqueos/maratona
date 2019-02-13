#include <iostream>
using namespace std;

int main(){
   int H,P,F,D,control=0;
   cin >> H >> P >> F >> D;
   if(D==1)
      for(int i=F;i!=H;i++){
         if(i==P)
            control++;
         if(i==15)
            i=-1;
      }
   if(D==-1)
      for(int i=F;i!=H;i--){
         if(i==P)
            control++;
         if(i==0)
            i=16;
      }
   if(D==1 or D==-1)
   (control==0) ? cout << "S\n" : cout << "N\n";

   return 0;
}
