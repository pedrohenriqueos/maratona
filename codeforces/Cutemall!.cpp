#include<bits/stdc++.h>

using namespace std;
int cor[100002],out,cont,sz[100002];
vector<int> G[100002];
void dfs(int v){
	cor[v]=1;
	for(auto &u:G[v]){
		if(!cor[u]){
			dfs(u);
			sz[v]+=sz[u];
		}
	}
	sz[v]++;
}
int main(){
	int N;
	scanf("%d",&N);
	int X=N;
	N--;
	while(N--){
		int u,v;
		scanf("%d %d",&u,&v);
		G[u].push_back(v);
		G[v].push_back(u);
	}
	dfs(1);
	for(int i=1;i<=X;i++)
		out+=(sz[i]%2==0);
	if(X&1)
		cout << "-1\n";
	else
		cout << out-1 << '\n';
}
