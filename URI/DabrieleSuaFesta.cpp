#include<bits/stdc++.h>

using namespace std;

int A[100002],pai[100002],pd[100002][2];
vector<int> G[100002];

int dp(int v,bool flag){
	if(pd[v][flag]!=-1) return pd[v][flag];
	int cas1=0,cas2=0;
	if(flag) cas1=A[v];
	for(int u:G[v]){
		if(u!=pai[v]){
			pai[u]=v;
			cas1+=dp(u,false);
			cas2+=dp(u,true);
		}
	}
	if(flag) return pd[v][flag]=max(cas1,cas2);
	return pd[v][flag]=cas2;
}
int main(){
	memset(pd,-1,sizeof pd);
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
		scanf("%d",&A[i]);
	for(int i=2;i<=N;i++){
		int a;
		scanf("%d",&a);
		G[i].push_back(a);
		G[a].push_back(i);
	}
	printf("%d\n",dp(1,1));
}
