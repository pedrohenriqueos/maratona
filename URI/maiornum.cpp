#include <iostream>
using namespace std;

int main(){
   int num,maior=0;
 
   for(int i=1;i<=100;i++){
   cin >> num;
   if(num==0)
      break;
   if(num>maior)
   maior = num; 
   }
   cout << maior << endl;
   return 0;
}
