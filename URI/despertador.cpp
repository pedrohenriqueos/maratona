#include <iostream>
using namespace std;

int main(){
   int H1,M1,H2,M2;
   while(cin >> H1 >> M1 >> H2 >> M2){
   if(H1==0 and M1==0 and H2==0 and M2==0)
      break;
   if((H1>=0 and H1<=23)&&(H2>=0 and H2<=23)&&(M1>=0 and M1<=59)&&(M2>=0 and M2<=59)){
   if((H2>H1)&&(M2>=M1))
      cout << (H2-H1)*60 + (M2-M1)<<endl;//OK
   else if((H2>H1)&&(M1>=M2))
      cout << ((H2-H1)-1)*60 + (60-(M1-M2))<<endl;//OK
   else if((H1>H2)&&(M2>=M1))
      cout << (24-(H1-H2))*60 + (M2-M1)<< endl;//OK
   else if((H1>H2)&&(M1>M2))
      cout << (24-(H1-H2)-1)*60 +(60-(M1-M2))<<endl;//OK
   else if((H1==H2)&&(M2>=M1))
      cout << ((H1-H2) + (M2-M1)) << endl;//
   else if((H1==H2)&&(M1>M2)) 
      cout << (23*60 + (60-(M1-M2))) << endl;//OK
   }
   }
   return 0;
}
