void dfs(int v){
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u]){
			dist[u]=dist[v]+1;
			dfs(u);
		}
}
