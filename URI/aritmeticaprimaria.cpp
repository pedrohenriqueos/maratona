#include<bits/stdc++.h>
using namespace std;

int main(){
	long long A,B;
	while(cin >> A >> B){
		if(A==0 and B==0)
			break;
		int saida=0,carry=0;
		while(A>0 or B>0){
			carry += A%10+B%10;
			if(carry>9){
				carry=1;
				saida++;
			}else
				carry=0;
			A/=10,B/=10;
		}
		if(saida==0)
			cout << "No carry operation.\n";
		else if(saida==1)
			cout << saida << " carry operation.\n";
		else
			cout << saida << " carry operations.\n";
	}
}
