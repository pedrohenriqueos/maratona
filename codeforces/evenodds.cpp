#include<bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long int N,M,s;
	cin >> N >> M;
	if(M>N/2){
		s=2;
		if(N%2==0)
		M-=N/2;
		else
		M-=(N/2+1);
		s+=2*(M-1);
	}else{
		s=1;
		s+=2*(M-1);
	}
	if(s==0)
		cout << N << '\n';
	else
	cout << s << '\n';
}
