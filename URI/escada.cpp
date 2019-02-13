#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
		if(N==0)
			break;
	int A[N],s=0;
	for(int i=0;i<N;i++)
		cin >> A[i];
	if(N>1){
		for(int i=1;i<N;i++)
			(A[i]-A[i-1]<10) ? s+=A[i]-A[i-1] : s+=10;
		s+=10;
	}else
		s+=10;
	cout << s << '\n';
	}
}
