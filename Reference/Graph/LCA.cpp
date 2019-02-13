int nivel[200002],ancestral[200002][20],table[200002][20];
vector< pair<int,int> > MST[200002];
void dfs(int v){
	for(pair<int,int> u:MST[v])
		if(nivel[u.second]==-1){
			ancestral[u.second][0]=v;
			table[u.second][0]=u.first;
			nivel[u.second]=nivel[v]+1;
			dfs(u.second);
			sz[v]+=sz[u];
		}
	sz[v]++;
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
int main(){
	memset(nivel,-1,sizeof nivel);
	memset(pai,-1,sizeof pai);
	memset(ancestral,-1,sizeof ancestral);
	//input, grafo
	dfs(1);//grafo 1-idexado
	for(int i = 1; i<20; ++i)
  		for(int j=1; j<=N; ++j)
		if(ancestral[j][i-1]!=-1){
			ancestral[j][i] = ancestral[ancestral[j][i-1]][i-1];
			table[j][i]=max(table[ancestral[j][i-1]][i-1],table[j][i-1]);
		}
	//Query -> elemento propagado na sparse table "table",k.second
	pair<int,int> k=LCA(Arestas[m].second.first,Arestas[m].second.second);
}//dist entre dois pontos com LCA nivel[a]+nivel[b]-2*nivel[lca], N-sz[aux1]-sz[aux2]
