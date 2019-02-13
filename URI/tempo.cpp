#include <iostream>
using namespace std;

int main(){
   int A,B,C;
   cin >> A >> B >> C;
   if(A==B){
      cout << "S\n";
   }
   else{
      if(A==C){
         cout << "S\n";
      }
      else{ 
         if(B==C){
            cout << "S\n";
         }
         else{ 
            if((A+B)==C){
               cout << "S\n";
            }
            else{ 
               if((A+C)==B){
                  cout << "S\n";
               }
               else{ 
                  if((B+C)==A){
                     cout << "S\n";
                  }
                  else{
                    cout << "N\n";
                  }
               }
            }
         }
      }
   }

   return 0;
}
