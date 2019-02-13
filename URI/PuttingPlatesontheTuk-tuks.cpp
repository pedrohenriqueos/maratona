#include<bits/stdc++.h>
using namespace std;

int main(){
	int T,A,B,C=1;
	cin >> T;
	while(T--){
		C=1;
		cin >> A >> B;
		if(A==0 and B==0)
			 cout << "0\n";
		if(A!=0){
			C*=pow(26,A);
		}
		if(B!=0){
			C*=pow(10,B);
		}
		if(A!=0 or B!=0)
			cout << C << '\n';
	}
}
