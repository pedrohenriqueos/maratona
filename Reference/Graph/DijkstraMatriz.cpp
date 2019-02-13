vector < pair< int, pii > > G[m][m];
int dist[m][m];
int Dijkstra(pair<int,int> v,pair<int,int> z){
	memset(dist,63,sizeof(dist));
	dist[v.first][v.second]=0;
	priority_queue< pair<int, pii > > pq;
	pq.push(make_pair(0,v));
	while(!pq.empty()){
		int uf = pq.top().second.first;
		int us = pq.top().second.second;
		int d = -pq.top().first;pq.pop();
		if(d>dist[uf][us]) continue;
		for(pair<int, pii > j:G[uf][us]){
			int wf=j.second.first,ws=j.second.second,_d=j.first;
			if(dist[wf][ws]>d+_d){
				dist[wf][ws]=d+_d;
				pq.push(make_pair(-dist[wf][ws],make_pair(wf,ws)));
			}
		}
	}
	return dist[z.first][z.second];
}
