#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007
#define int long long
int dp[20][1000][2],L,R;
int digitDP(int idx, int sum, int can, vector<int> &digit){
	if(idx == (int)digit.size()) 
		return sum%mod;
	if(dp[idx][sum][can] != -1)
		return dp[idx][sum][can];
	int ans = 0;
	for(int i = 0; i < 10; i++)
		if(can or i <= digit[idx])
			ans = (ans + digitDP(idx + 1, sum + i, can or i < digit[idx], digit))%mod;
	return dp[idx][sum][can] = ans%mod;
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
	while(cin >> L >> R){
		cout << query(R) - query(L-1) << '\n';
	}

}
