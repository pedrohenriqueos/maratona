#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f3f3f3f3f
#define ll long long

// Knapsack - O(n*MAXV)

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, W;
	scanf("%d%d",&n,&W);
	vector<ll> val(n),weight(n);
	for(int i=0;i<n;i++)
		scanf("%lld %lld",&weight[i],&val[i]);
	ll sum = 0;
	for(int x: val) sum+=x;
	vector<ll> dp (sum + 1,inf);
	dp[0]=0;
	for(int i=0;i<n;i++)
		for(int value= sum-val[i];value>=0;value--)
			dp[value+val[i]] = min(dp[value+val[i]],dp[value]+weight[i]);
	int ans = 0;
	for(int i = 0;i<=sum;i++)
		if(dp[i]<=W)
			ans = max(ans,i);
	printf("%d\n",ans);
}

