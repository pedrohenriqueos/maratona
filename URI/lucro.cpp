#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	while(cin >> N){
	cin >> M;
	int A[N],maior=0,resp=0,quant=0;
	for(int i=0;i<N;i++){
		cin >> A[i];
		maior=max(0,maior+A[i]-M);
		resp=max(resp,maior);
	}
	cout << resp << '\n';
	}
}
