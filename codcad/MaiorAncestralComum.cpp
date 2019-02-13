#include<bits/stdc++.h>

using namespace std;

int A[1002],B[1002],N,M;
int pd[1002][1002];
int dp(int a,int b){
	if(a>=N or b>=M) return 0;
	if(pd[a][b]!=-1) return pd[a][b];
	if(A[a]==B[b])
		return pd[a][b]=max(dp(a+1,b+1)+1,max(dp(a+1,b),dp(a,b+1)));
	return pd[a][b]=max(dp(a+1,b),dp(a,b+1));
}
int main(){
	memset(pd,-1,sizeof pd);
	cin >> N >> M;
	for(int i=0;i<N;i++)
		cin >> A[i];
	for(int i=0;i<M;i++)
		cin >> B[i];
	int ans=dp(0,0);
	cout << N-ans << " " << M-ans << '\n';
}
