#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,quant=0;
	cin >> N;
	int A[N],B[N];
	for(int i=0;i<N;i++){
		cin >> A[i] >> B[i];
		if(B[i]-A[i]>=2)
			quant++;
	}	
	cout << quant << '\n';
}
