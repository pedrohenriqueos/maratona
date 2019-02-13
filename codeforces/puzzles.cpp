#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	int A[M];
	for(int i=0;i<M;i++)
		cin >> A[i];
	sort(A,A+M);
	int min = 10000000;
	for(int i=0;i<=M-N;i++){
		if((A[i+N-1]-A[i])<min)
			min = A[i+N-1]-A[i];
	}
	cout << min << '\n';
}
