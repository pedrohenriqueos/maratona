#include<bits/stdc++.h>
using namespace std;

#define int long long

int dp[20][1000][2],L,R,T;
int digitDP(int idx, int sum, int can, vector<int> &digit){
	if(sum>3) return 0;
	if(idx == (int)digit.size()) 
		return 1;
	if(dp[idx][sum][can] != -1)
		return dp[idx][sum][can];
	int ans = 0;
	for(int i = 0; i < 10; i++)
		if(can or i <= digit[idx])
			ans = (ans + digitDP(idx + 1, sum+(i!=0), can or i < digit[idx], digit));
	return dp[idx][sum][can] = ans;
}

int query(int x){
	memset(dp, -1, sizeof(dp));	
    vector<int> digit;
    while(x){
        digit.push_back(x%10);
        x /= 10;
    }
    reverse(digit.begin(), digit.end());
    return digitDP(0, 0, 0, digit);
}


main(){
	scanf("%lld",&T);
	while(T--){
		scanf("%lld %lld",&L,&R);
		printf("%lld\n",query(R)-query(L-1));
	}
}
