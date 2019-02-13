#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
//#define int long long
int N,x;
int S[3000],C[3000];
int dp[3000][3000][4];
map<int,int> Map;
pair<map<int,int>::iterator,bool> r;
int pd(int id,int v,int q){
	if(q==0) return 0;
	if(id>=N) return inf;
	if(dp[id][Map[v]][q]!=-1) return dp[id][Map[v]][q];
	if(S[id]>v)
		return dp[id][Map[v]][q]=min(pd(id+1,S[id],q-1)+C[id],pd(id+1,v,q));
	return dp[id][Map[v]][q]= pd(id+1,v,q);
}
int main(){
	memset(dp,-1,sizeof dp);
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> S[i];
		r=Map.insert({S[i],x});
		if(r.second) x++;
	}
	for(int i=0;i<N;i++)
		cin >> C[i];
	int resp=pd(0,0,3);
	if(resp==inf)
		cout << "-1\n";
	else
		cout << resp << '\n';
}
