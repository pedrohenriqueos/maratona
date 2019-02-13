#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,saida=0;
	cin >> N >> M;
	int A[N];
	for(int n=0;n<N;n++)
		cin >> A[n];
	for(int i=1;i<N;i++){
		if(A[i-1]!=M){
			if(A[i-1]<M){
				saida+=(M-A[i-1]);
				A[i]-=(A[i-1]-M);
				A[i-1]+=(M-A[i-1]);
			}
			if(A[i-1]>M){
				saida+=(A[i-1]-M);
				A[i]-=(A[i-1]-M);
				A[i-1]-=(A[i-1]-M);
			}
		}
	}
	cout << saida << '\n';
}
