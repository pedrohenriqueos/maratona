#include <bits/stdc++.h>
using namespace std;
int gcd(int num1,int num2){
int  gcd=1;
for(int i=1;i<=num1 and i<=num2;i++)
	if(num1%i==0 and num2%i==0)
		gcd=i;
return gcd;
}
int main(){
	int N,A,B;
	while(cin >> N >> A >> B){
		if(N==0 and A==0 and B==0)
			break;
		cout << N/A + N/B - N/(A*B/gcd(A,B)) << '\n';
	}
}
