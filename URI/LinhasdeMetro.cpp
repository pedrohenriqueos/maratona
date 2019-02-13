#include<bits/stdc++.h>

using namespace std;

int nivel[100002],ancestral[100002][20],sz[100002],N,Q,table[100002][20];
vector< int > MST[100002];
void dfs(int v){
	for(int u:MST[v])
		if(nivel[u]==-1){
			ancestral[u][0]=v;
			//table[u][0]=u.first;
			nivel[u]=nivel[v]+1;
			dfs(u);
			sz[v]+=sz[u];
		}
	sz[v]++;
}
int LCA(int u,int v){
	if(nivel[u]<nivel[v]) swap(u,v);
	int m=0;
	for(int i=19;i>=0;i--)
		if(nivel[u]-(1<<i) >= nivel[v]){
			//m=max(m,table[u][i]);
			u=ancestral[u][i];
		}
	if(u==v) return v;
	for(int i=19;i>=0;i--)
		if(ancestral[u][i]!=-1 and ancestral[u][i]!=ancestral[v][i]){
			//m=max(m,max(table[u][i],table[v][i]));
			u=ancestral[u][i],v=ancestral[v][i];
		}
	return ancestral[u][0]; 
}
int main(){
	memset(nivel,-1,sizeof nivel);
	memset(pai,-1,sizeof pai);
	memset(ancestral,-1,sizeof ancestral);
	scanf("%d %d",&N,&Q);
	while(N--){
		int u,v;
		scanf("%d %d",&u,&v);
		MST[u].push_back(v);
		MST[v].push_back(u);
	}
	dfs(1);
	for(int i = 1; i<20; ++i)
  		for(int j=1; j<=N; ++j)
		if(ancestral[j][i-1]!=-1){
			ancestral[j][i] = ancestral[ancestral[j][i-1]][i-1];
			table[j][i]=max(table[ancestral[j][i-1]][i-1],table[j][i-1]);
		}
	while(Q--){
		int u1,u2,v1,v2;
		scanf("%d %d %d %d",&u1,&v1,&u2,&v2);
		int lca1=LCA(u1,v1),lca2=LCA(u2,v2);
		
	}
}
