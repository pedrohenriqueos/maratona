#include<bits/stdc++.h>
using namespace std;

long long int mdc(long long int a,long long int b){
	return (b==0)?a:mdc(b,a%b);
}

int main(){
	long long int A,B,C,D;
	cin >> A >> B >> C >> D;
	long long int k = (B*D)/(mdc(B,D));
	A = A*(k/B);
	C = C*(k/D);
	long long int i = A+C;
	i = mdc(i,k);
	cout << (A+C)/i << " " << k/i << '\n';	
}
