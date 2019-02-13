#include<bits/stdc++.h>
using namespace std;

int A[1002];

int main(){
	int N,M,a,quant=0;
	cin >> N >> M;
	while(N--){
		cin >> a;
		A[a]++;
	}
	for(int i=1001;i>=0;i--){
		M-=A[i];
		quant+=A[i];
		if(M<=0)
			break;
	}
	cout << quant << '\n';
}
