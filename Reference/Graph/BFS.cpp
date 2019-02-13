void bfs(int v){
	queue<int> q;
	q.push(v);
	cor[v]=1;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int w:G[u])
		if(!cor[w]){
			q.push(w);
			cor[w]=1;
			dist[w]=dist[u]+1;
		}
	}
}
