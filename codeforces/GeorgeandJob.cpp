#include<bits/stdc++.h>
using namespace std;

#define int long long
int N,M,K,A[5002],S[5002];
int dp[5002][5002];
int pd(int id,int quant){
	if(id>N or quant==0) return 0;
	if(dp[id][quant]!=-1) return dp[id][quant];
	dp[id][quant]=max(pd(id+M,quant-1)+S[id]-S[id-M],pd(id+1,quant));
	return dp[id][quant];
}
main(){
	memset(dp,-1,sizeof dp);
	cin >> N >> M >> K;
	for(int i=1;i<=N;i++){
		cin >> A[i];
		S[i]=S[i-1]+A[i];
	}
	cout << pd(M,K) << '\n';
	return 0;
}
