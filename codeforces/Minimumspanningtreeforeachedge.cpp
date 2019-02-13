#include<bits/stdc++.h>

using namespace std;
#define int long long
int N,M,x,mst;
int pai[200002],MST1[200002],nivel[200002],ancestral[200002][20],table[200002][20];
vector< pair<int,int> > MST[200002];
int find(int x){
	return ((pai[x]==-1)?x:pai[x]=find(pai[x]));
}
void join(int a,int b){
	a=find(a),b=find(b);
	pai[a]=b;
}
void dfs(int v){
	for(pair<int,int> u:MST[v])
		if(nivel[u.second]==-1){
			ancestral[u.second][0]=v;
			table[u.second][0]=u.first;
			nivel[u.second]=nivel[v]+1;
			dfs(u.second);
		}
}
pair<int,int> LCA(int u,int v){
	if(nivel[u]<nivel[v]) swap(u,v);
	int m=0;
	for(int i=19;i>=0;i--)
		if(nivel[u]-(1<<i) >= nivel[v]){
			m=max(m,table[u][i]);
			u=ancestral[u][i];
		}
	if(u==v) return {v,m};
	for(int i=19;i>=0;i--)
		if(ancestral[u][i]!=-1 and ancestral[u][i]!=ancestral[v][i]){
			m=max(m,max(table[u][i],table[v][i]));
			u=ancestral[u][i],v=ancestral[v][i];
		}
	return {ancestral[u][0],max(m,max(table[u][0],table[v][0]))}; 
}
main(){
	memset(nivel,-1,sizeof nivel);
	memset(pai,-1,sizeof pai);
	memset(ancestral,-1,sizeof ancestral);
	cin >> N >> M;
	priority_queue< pair<pair<int,int>, pair<int,int> >, vector< pair< pair<int,int>, pair<int,int> > >, greater< pair< pair<int,int>, pair<int,int> > > > pq;
	pair<int,pair<int,int> > Arestas[M];
	for(int m=0;m<M;m++){
		int a,b,c;
		cin >> a >> b >> c;
		Arestas[m]={c,{a,b}};
		pq.push({{c,x++},{a,b}});
	}
	while(!pq.empty()){
		pair<pair<int,int>, pair<int,int> > k=pq.top();
		pq.pop();
		if(find(k.second.second)!=find(k.second.first)){
			join(k.second.second,k.second.first);
			MST[k.second.second].push_back({k.first.first,k.second.first});
			MST[k.second.first].push_back({k.first.first,k.second.second});
			MST1[k.first.second]=1;
			mst+=k.first.first;
		}
	}
	dfs(1);
	for(int i = 1; i<20; ++i)
  		for(int j=1; j<=N; ++j){
			ancestral[j][i] = ancestral[ancestral[j][i-1]][i-1];
			table[j][i]=max(table[ancestral[j][i-1]][i-1],table[j][i-1]);
		}
	for(int m=0;m<M;m++){
		if(MST1[m]){
			cout << mst << '\n';
		}else{
			pair<int,int> k=LCA(Arestas[m].second.first,Arestas[m].second.second);
			cout << mst-k.second+Arestas[m].first << '\n';
		}
	}
}
