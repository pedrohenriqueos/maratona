#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M and N and M){
	int A[M],B[N+1];
	memset(A,0,sizeof(A));
	memset(B,0,sizeof(B)); 
	for(int m=0;m<M;m++){
		cin >> A[m];
		for(int i=0;i<m;i++)
			B[abs(A[m]-A[i])]=1;
	}
	bool saida=true;
	for(int i=1;i<=N;i++)
		if(!B[i])
			saida=false;
	cout << ((saida)?"Y\n":"N\n");
	}
}	
