#include <iostream>
using namespace std;

int main(){
   int Cv,Ce,Cs,Fv,Fe,Fs;
   cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;
   if((Cv*3+Ce*1)>(Fv*3+Fe*1)){
      cout << "C"<< endl;
   }else if((Cv*3+Ce*1)<(Fv*3+Fe*1)){
      cout << "F"<< endl;
   }else if(Cs>Fs){
      cout << "C"<< endl;
   }else if(Cs<Fs){
      cout << "F"<< endl;
   }else{
      cout << "="<< endl;
   }
   return 0;
}
