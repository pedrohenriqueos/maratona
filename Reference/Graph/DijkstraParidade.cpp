int dist[100002][3];// paridade da chegada no ponto,%3 (quantidade de arestas usadas)
//Dijkstra com paridade ate o destino, acessar dist[z][X] na main
void dijkstra(int v,int z){
	memset(dist,63,sizeof dist);
	priority_queue< pair<int,pair<int,int> > > pq;
	dist[v][0]=0;
	pq.push({0,{v,0}});
	while(!pq.empty()){
		int d=-pq.top().f;
		int u=pq.top().s.f;
		int p=pq.top().s.s;
		pq.pop();
		if(u==z) continue;
		if(d>dist[u][0] and d>dist[u][1] and d>dist[u][2]) continue;
		for(pair<int,int> j:G[u]){
			int w=j.s,_d=j.f;
			if(p==2){//max paridade
				if(dist[w][0]>_d+dist[u][2]){
					dist[w][0]=_d+dist[u][2];
					pq.push({-dist[w][0],{w,0}});
				}
			}else{
				if(dist[w][p+1]>_d+dist[u][p]){
					dist[w][p+1]=_d+dist[u][p];
					pq.push({-dist[w][p+1],{w,p+1}});
				}
			}
		}
	}
}
