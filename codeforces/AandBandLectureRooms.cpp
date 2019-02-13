#include<bits/stdc++.h>

using namespace std;

int N,M,x,mst;
int pai[100002],sz[100002],nivel[100002],ancestral[100002][20];
vector<int> MST[100002];
int find(int x){
	return ((pai[x]==-1)?x:pai[x]=find(pai[x]));
}
void join(int a,int b){
	a=find(a),b=find(b);
	pai[a]=b;
}
void dfs(int v){
	//cout << v << " ";
	for(int u:MST[v])
		if(nivel[u]==-1){
			ancestral[u][0]=v;
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
		if(nivel[u]-(1<<i) >= nivel[v])
			u=ancestral[u][i];
	if(u==v) return v;
	for(int i=19;i>=0;i--)
		if(ancestral[u][i]!=-1 and ancestral[u][i]!=ancestral[v][i])
			u=ancestral[u][i],v=ancestral[v][i];
	return ancestral[u][0]; 
}
int main(){
	memset(nivel,-1,sizeof nivel);
	memset(pai,-1,sizeof pai);
	memset(ancestral,-1,sizeof ancestral);
	cin >> N;
	for(int m=0;m<(N-1);m++){
		int a,b;
		cin >> a >> b;
		MST[a].push_back(b);
		MST[b].push_back(a);
	}
	nivel[1]=0;
	//cout << "dfs: "; 
	dfs(1);
	//cout << '\n';
	for(int i = 1; i<20; ++i)
  		for(int j=1; j<=N; ++j){
			ancestral[j][i] = ancestral[ancestral[j][i-1]][i-1];
		}
	cin >> M;
	for(int m=0;m<M;m++){
		int a,b;
		cin >> a >> b;
		int lca=LCA(a,b);
		if((nivel[a]+nivel[b]-2*nivel[lca])%2==1){
			cout << "0\n";
		}else if(lca==a or lca==b){
			cout << sz[lca]-min(sz[a],sz[b])-1 << '\n';
		}else{
			
			cout << N-(nivel[a]+nivel[b]-2*nivel[lca])-sz[a]-sz[b]+1 << '\n';
		}
	}
}
