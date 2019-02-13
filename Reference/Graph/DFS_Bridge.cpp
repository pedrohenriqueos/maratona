void dfs(int u,int p){
	cor[u]=1;
	d[u]=low[u]=tempo++;
	for(int &v:G[u])
		if(!cor[v]){
			dfs(v,u);
			low[u]=min(low[u],low[v]);
			if(low[v]>d[u]) 
				//ponte encontrada se entrar aqui
		}else if(v!=p) 
			low[u]=min(low[u],d[v]);
}
