#include<bits/stdc++.h>
using namespace std;

vector<int> G[200002],L;
int Map[200002],cor[200002],sz[200002];
void dfs(int v){
	Map[v]=L.size();
	L.push_back(v);
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u]){
			dfs(u);
			sz[v]+=sz[u];
		}
	sz[v]++;
}
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	for(int i=2;i<=N;i++){
		int a;
		scanf("%d",&a);
		G[a].push_back(i);
		G[i].push_back(a);
	}
	dfs(1);
	while(M--){
		int a,b;
		scanf("%d %d",&a,&b);
		if((sz[a])<b){
			printf("-1\n");
			continue;
		}
		
		printf("%d\n",L[Map[a]+b-1]);
	}
}
