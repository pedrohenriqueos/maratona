#include<bits/stdc++.h>

using namespace std;

int N,M;
int C[10002];
inline void counting(vector<int> &X,int l,int r,int x){
	for(int x=l;x<=r;x++)
		C[X[x]]++;
	int c=l;
	for(int i=1;i<=N;i++)
		if(C[i])
			X[c++]=i,C[i]--;
}

int main(){
	scanf("%d %d",&N,&M);
	vector<int> P(N+1),X(N+1),R(N+1);
	for(int i=1;i<=N;i++){
		scanf("%d",&X[i]);
		P[X[i]]=i;
		R[i]=X[i];
	}
	
	while(M--){
		int l,r,x;
		scanf("%d %d %d",&l,&r,&x);
		counting(X,l,r,x);
		if(R[x]==X[x])
			puts("Yes");
		else
			puts("No");
		for(int k=l;k<=r;k++)
			X[k] = R[k];
	}
}
