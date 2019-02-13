#include<bits/stdc++.h>
using namespace std;
#define int long long
int N,A[100010],cor[100010],pai[100010];
vector<int> G[100010];
int pd[100010][2];
int dp(int v,bool flag){
	if(pd[v][flag]!=-1) return pd[v][flag];
	int ans1=0,ans2=0;
	if(flag) ans1=A[v];
	for(int u:G[v]){
		if(u==pai[v]) continue;
		pai[u]=v;
		ans1+=dp(u,false);
		ans2+=dp(u,true);
	}
	if(flag) return pd[v][flag]=max(ans1,ans2);
	if(!flag) return pd[v][flag]=ans2;
}
main(){
	memset(pd,-1,sizeof pd);
	cin >> N;
	for(int i=0;i<(N-1);i++){
		int a,b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	for(int i=1;i<=N;i++)
		cin >> A[i];
	cout << dp(1,true) << '\n';

}
