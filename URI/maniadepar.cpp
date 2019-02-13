#include<bits/stdc++.h>
using namespace std;
#define m 10002
#define inf 0x3f3f3f3f
typedef pair<int,int> pii;
int cor[m],N;
vector< pii > G[m];
pii dist[m];
int Dijkstra(int v,int z){
	for(int i=2;i<=N;i++)
		dist[i]=pii(inf,inf);
	dist[v]=pii(0,inf);
	priority_queue< pii > pq;
	pq.push(make_pair(0,v));
	while(!pq.empty()){
		int u = pq.top().second;
		int d = -pq.top().first;
		pq.pop();
		if(d>dist[u].first and d>dist[u].second) continue;
		for(pii j:G[u]){
			int w=j.second,_d=j.first;
			if(dist[u].first+_d<dist[w].second){
				dist[w].second=dist[u].first+_d;
				pq.push(make_pair(-dist[w].second,w));
			}
			if(dist[u].second+_d<dist[w].first){
				dist[w].first=dist[u].second+_d;
				pq.push(make_pair(-dist[w].first,w));
			}
		}
	}
	if(dist[z].first==inf)
		return -1;
	return dist[z].first;
}	

int main(){
	int M,a,b,c;
	cin >> N >> M;
	while(M--){
		cin >> a >> b >> c;
		G[a].push_back(make_pair(c,b));
		G[b].push_back(make_pair(c,a));
	}
	int saida = Dijkstra(1,N);
	cout << saida << '\n';
}
