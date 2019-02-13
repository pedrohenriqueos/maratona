#include<bits/stdc++.h>

using namespace std;

#define int long long
#define mod 1000000007

int T,M,N,out,pd[100002][52];

int dp(int p,int t){
	if(t==1) return 1;
	if(pd[p][t]!=-1) return pd[p][t];
	if(p==N)
		return pd[p][t] = dp(p-1,t-1)%mod;
	if(p==M)
		return pd[p][t] = dp(p+1,t-1)%mod;
	return pd[p][t] = (dp(p-1,t-1)+dp(p+1,t-1))%mod;
}
main(){
	memset(pd,-1,sizeof pd);
	scanf("%lld %lld %lld",&T,&M,&N);
	for(int i=N;i>=M;i--)
		out=(out+dp(i,T))%mod;
	printf("%lld\n",out);
}
