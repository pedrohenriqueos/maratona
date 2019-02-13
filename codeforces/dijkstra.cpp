#include<bits/stdc++.h>
using namespace std;


vector< pair<int,int> > G[100002];
list<int> t;
int dist[100002],cor[100002];
int dijkstra(int v,int z){
	memset(dist,63,sizeof(dist));
	dist[v]=0;
	priority_queue< pair<int,int> > pq;
	pq.push(make_pair(0,v));
	while(!pq.empty()){
		int u = pq.top().second;
		int d = -pq.top().first;
		int ant=-1;
		pq.pop();
		if(d>dist[u]) continue;
		if(u==z) return d;
		for(pair<int,int> j:G[u]){
			int w=j.second,_d=j.first;
			if(dist[w]>d+_d){
				if(ant!=u){
					t.push_front(w);
				}else{
					t.pop_front();
					t.push_front(w);
				}
				ant=u;
				dist[w]=d+_d;
				pq.push(make_pair(-dist[w],w));
			}
		}
	}
	return -1;
}

int main(){
	int N,M,a,b,c;
	cin >> N >> M;
	while(M--){
		cin >> a >> b >> c;
		G[a].push_back(make_pair(c,b));
		G[b].push_back(make_pair(c,a));
	}
	int saida=dijkstra(1,N);
	if(saida==-1){
		cout << saida << '\n';
	}else{
	cout << "1 ";
	int dif=-1;
	while(t.size()>=1){
		if(t.back()!=dif)
		cout << t.back() << " ";
		dif=t.back();
		t.pop_back();
		
	}
	cout <<'\n';
	}
}
