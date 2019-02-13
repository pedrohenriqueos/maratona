#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,cont=0;
	cin >> N >> M;
	vector<int> A(N),B(M);
	for(auto &a:A)
		cin >> a;
	for(auto &b:B)
		cin >> b;
	for(int i=0,j=0;i<M;j++){
		if(j==N or i==M) break;
		if(B[i]>=A[j]){
			i++,cont++;
		}
	}
	cout << cont << '\n';
}
