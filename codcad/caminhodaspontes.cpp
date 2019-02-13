#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > G[1002];
int dist[1002],N,M,ini,fim;

int Dijkstra(int v,int z){
	memset(dist,63,sizeof(dist));
	dist[v]=0;
	priority_queue< pair<int,int> > pq;
	pq.push(make_pair(0,v));
	while(!pq.empty()){
		int u= pq.top().second;
		int d= -pq.top().first;
		pq.pop();
		if(d>dist[u])
			continue;
		if(u==z)
			return d;
		for(pair<int,int> j:G[u]){
			int w=j.second,_d=j.first;
			if(dist[w]>d+_d){
				dist[w]=d+_d;
				pq.push(make_pair(-dist[w],w));
			}
		}
	}
	return numeric_limits<int>::infinity();
}

int main(){
	ini=1003;
	cin >> N >> M;
	while(M--){
	int dist,a,b;
		cin >> a >> b >> dist;
		G[a].push_back(make_pair(dist,b));
		G[b].push_back(make_pair(dist,a));
		if(a>fim)
			fim=a;
		if(b>fim)
			fim=b;
		if(a<ini)
			ini=a;
		if(b<ini)
			ini=b;
	}
	int saida = Dijkstra(ini,fim);
	cout << saida << '\n';
}
