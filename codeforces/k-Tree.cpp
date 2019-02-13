#include<bits/stdc++.h>

using namespace std;
int N,M,D,memo[101][2];
#define MOD 1000000007
int pd(int sum,bool f){
	if(sum<0 or (sum==0 and !f))
		return 0;
	if(memo[sum][f]!=-1) return memo[sum][f];
	if(sum==0 and f) return 1;
	int ans=0;
	for(int i=1;i<=M;i++){
		ans=(ans+pd(sum-i,(f or i>=D)))%MOD;
	}
	return memo[sum][f]=ans%MOD;
}

int main(){
	memset(memo,-1,sizeof memo);
	cin >> N >> M >> D;
	cout << pd(N,0);

}
