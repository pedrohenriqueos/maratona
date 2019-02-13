#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
typedef pair<int,int> ii;
int N,M,X,a,b,c,dist[20002];

vector< pair<int,int> > G[20002];
int up(double D,double X){
	return floor(D*((100.0+X)/100.0));
}
int dijkstra(int v,int z){
	memset(dist,63,sizeof(dist));
	dist[v]=0;
	priority_queue< ii > pq;
	pq.push({0,v});
	while(!pq.empty()){
		int u = pq.top().second;
		int d = -pq.top().first;
		pq.pop();
		if(d>dist[u]) continue;
		if(u==z) return d;
		for(ii j:G[u]){
			int w=j.second,_d=j.first;
			if(dist[w]>d+_d){
				dist[w]=d+_d;
				pq.push({-dist[w],w});
			}
		}
	}
	return inf;
}

pair<int,int> dijkstra2(int v,int z,int X){
	memset(dist,63,sizeof(dist));
	dist[v]=0;
	priority_queue< pair<int,pair<int,int> > > pq;
	pq.push({0,{v,0}});
	while(!pq.empty()){
		int u = pq.top().second.first;
		int d = -pq.top().first;
		int r = pq.top().second.second;
		pq.pop();
		if(d>dist[u]) continue;
		if(u==z) return {d,r};
		for(ii j:G[u]){
			int w=j.second,_d=j.first;
			if(_d<=X)
			if(dist[w]>d+_d){
				dist[w]=d+_d;
				pq.push({-dist[w],{w,(int)max(r,_d)}});
			}
		}
	}
	return {inf,inf};
}

int main(){
	cin >> N >> M >> X;
	while(M--){
		cin >> a >> b >> c;
		a--,b--;
		G[a].push_back({c,b});
		G[b].push_back({c,a});
	}
	int d=dijkstra(0,N-1);
	int Ver=up(d,X);
	int i=0,j=Ver,out=inf;
	//cout << j << '\n';
	while(i<=j){
		int m=(i+j)/2;
		pair<int,int> x=dijkstra2(0,N-1,m);
		if(x.first<=Ver){
			j=m-1;
			out=min(out,x.second);
		}else{
			i=m+1;
		}
	}
	cout << out << '\n';
}
