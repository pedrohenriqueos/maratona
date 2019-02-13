//Dois vetores A e B
int dp(int a,int b){
	if(a>=N or b>=M) return 0;
	if(pd[a][b]!=-1) return pd[a][b];
	if(A[a]==B[b])
		return pd[a][b]=max(dp(a+1,b+1)+1,max(dp(a+1,b),dp(a,b+1)));
	return pd[a][b]=max(dp(a+1,b),dp(a,b+1));
}
//Um vetor A
int pd(int id,int v){
	if(id<0) return 0;
	if(dp[id][Map[v]]!=-1) return dp[id][Map[v]];
	if(A[id]<=v)
		return dp[id][Map[v]]=max(pd(id-1,A[id])+1,pd(id-1,v));
	return dp[id][Map[v]]=pd(id-1,v);
}
