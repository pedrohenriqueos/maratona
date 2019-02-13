int N,M,t,dist[MAXN],gr[MAXN],ciclo,out[MAXN],cor[MAXN];
vi G[MAXN],GI[MAXN];
stack<int> s;
//OBS: o pedido da questao ira alterar os dados retirados das dfs`s
void dfs1(int v){
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u])
			dfs1(u);
	dist[v]=t++;
	s.push(v);
}
void dfs2(int v,int di){
	cor[v]=0;
	gr[v]=ciclo;
	for(int u:GI[v])
		if(cor[u] and di>dist[u])
			dfs2(u,di);
}
int main(){
	cin >> N >> M;
	while(M--){
		int a,b;
		cin >> a >> b;
		G[b].pb(a);
		GI[a].pb(b);
	}
	FOR(i,1,N+1)
		if(!cor[i])
			dfs1(i);
	while(!s.empty()){
		int k=s.top();
		s.pop();
		if(cor[k])
			dfs2(k,dist[k]),ciclo++;
	}
}
