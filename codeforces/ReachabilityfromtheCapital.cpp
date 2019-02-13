#include<bits/stdc++.h>
using namespace std;

int N,M,S,cor[5002],cont,sz[5002];
vector<int> G[5002];
void dfs(int v){
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u])
			dfs(u);
}
void dfs2(int v){
	cont++;
	cor[v]=1;
	for(int u:G[v]){
		if(sz[u]==0){
			dfs(u);
		}else sz[v]+=sz[u],cont--;
	}
	sz[v]++;
}
int main(){
	scanf("%d %d %d",&N,&M,&S);
	while(M--){
		int a,b;
		scanf("%d %d",&a,&b);
		G[a].push_back(b);
	}
	dfs(S);
	for(int i=1;i<=N;i++)
		if(!cor[i]){
			dfs2(i);
		}
	printf("%d\n",cont);
}
