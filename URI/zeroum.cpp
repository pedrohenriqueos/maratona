#include <iostream>
using namespace std;

int main(){
   int A,B,C;
   cin >> A >> B >> C;
   if(A==B and A!=C)
      cout << "C" << endl;
   else if(A==C and A!=B)
      cout << "B" << endl;
   else if(B==C and B!=A)
      cout << "A" << endl;
   else
      cout << "*" << endl;
   return 0;
}
