#include<bits/stdc++.h>

using namespace std;
#define int long long
int N,M,x,mst;
int nivel[200002],ancestral[200002][20],P[200002];
vector<int> G[200002];
map< pair<int,int>,int> Arestas;
void dfs(int v){
	for(int u:G[v])
		if(nivel[u]==-1){
			ancestral[u][0]=v;
			nivel[u]=nivel[v]+1;
			dfs(u);
		}
}
void dfsat(int v,int z){
	for(int u:G[v])
		if(nivel[u]>nivel[v]){
			dfsat(u,v);
			P[Arestas[{min(z,v),max(z,v)}]]+=P[Arestas[{min(u,v),max(u,v)}]];
		}

}
int LCA(int u,int v){
	if(nivel[u]<nivel[v]) swap(u,v);
	for(int i=19;i>=0;i--)
		if(nivel[u]-(1<<i) >= nivel[v])
			u=ancestral[u][i];
	if(u==v) return v;
	for(int i=19;i>=0;i--)
		if(ancestral[u][i]!=-1 and ancestral[u][i]!=ancestral[v][i])
			u=ancestral[u][i],v=ancestral[v][i];
		
	return ancestral[u][0]; 
}
main(){
	memset(nivel,-1,sizeof nivel);
	memset(ancestral,-1,sizeof ancestral);
	cin >> N;
	for(int m=0;m<(N-1);m++){
		int a,b;
		cin >> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
		Arestas[{min(a,b),max(b,a)}]=m;
		//cout << min(a,b) << " " << max(a,b) << '\n';
	}
	Arestas[{-1,1}]=100002;
	nivel[1]=0;
	dfs(1);
	for(int i = 1; i<20; ++i)
  		for(int j=1; j<=N; ++j)
			if(ancestral[j][i-1]!=-1)
				ancestral[j][i] = ancestral[ancestral[j][i-1]][i-1];
	cin >> M;
	for(int m=0;m<M;m++){
		int a,b;
		cin >> a >> b;
		int lca=LCA(a,b);
		//cout << min(a,ancestral[a][0]) << " " << max(a,ancestral[a][0]) << '\n';
		//cout << min(b,ancestral[b][0]) << " " << max(b,ancestral[b][0]) << '\n';
		//cout << min(lca,ancestral[lca][0]) << " " << max(lca,ancestral[lca][0]) << '\n';
		P[Arestas[{min(a,ancestral[a][0]),max(a,ancestral[a][0])}]]++;
		P[Arestas[{min(b,ancestral[b][0]),max(b,ancestral[b][0])}]]++;
		P[Arestas[{min(lca,ancestral[lca][0]),max(lca,ancestral[lca][0])}]]-=2;
	}
	dfsat(1,-1);
	for(int i=0;i<(N-1);i++)
		cout << P[i] << " ";
	cout << '\n';
}
