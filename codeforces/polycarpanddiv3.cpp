#include<bits/stdc++.h>
using namespace std;

string s;
int dp[200010][3];

int pd(int id,int v){
	if(id>=s.size()) return 0;
	if(dp[id][v]!=-1) return dp[id][v];
	int val=(int)(s[id]-'0');
	val%=3;
	if(val==0)
		return dp[id][val]=pd(id+1,0)+1;
	v+=val;
	if(v>=3)
		return dp[id][0]=pd(id+1,0)+1;
	return dp[id][v]=(pd(id+1,v));
}
int main(){
	memset(dp,-1,sizeof dp);
	cin >> s;
	cout << pd(0,0) << '\n';

}
