#include<bits/stdc++.h>
using namespace std;

vector< pair<int,int> > G[1002];
vector<int> MST[1002];
int cor[1002],dist[1002],N,M;
int prim(int v){
	int mst=0;
	memset(cor,0,sizeof cor);
	memset(dist,63,sizeof dist);
	dist[v]=0;
	priority_queue< pair<int,int> > pq;
	pq.push(make_pair(0,v));
	while(!pq.empty()){
		int u= pq.top().second;
		pq.pop();
		if(cor[u]) continue;
		cor[u]=1;
		for(pair<int,int> w:G[u]){
			if(dist[w.second]>w.first and !cor[w.second]){
				if(MST[u].size())
					MST[u][0]=w.second;
				else
					MST[u].push_back(w.second);
				dist[w.second]=w.first;
				pq.push(make_pair(-w.first,w.second));
			}
		}
	}
	for(int i=0;i<N;i++){
		mst+=dist[i];
	}
	memset(cor,0,sizeof cor);
	return mst;
}

int main(){
	cin >> N >> M;
	while(M--){
		int a,b,c;
		cin >> a >> b >> c;
		G[a].push_back({c,b});
		G[b].push_back({c,a});
	}
	cout << prim(0) << '\n';
}







