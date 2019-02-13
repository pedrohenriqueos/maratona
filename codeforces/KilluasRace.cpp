#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define f first
#define s second
//#define int long long
vector< pair<int,int> > G[100002];
int dist[100002][3];
pair<int,string> S[3];
int N,M,Aresta[100002][3];
map< pair<int,int>,int > Map;
void dijkstra(int v,int z){//Dijkstra com paridade até o destino, acessar dist[z][X] na main
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
			if(p==2){
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

main(){
	scanf("%d %d",&N,&M);
	while(M--){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		G[a].push_back({c,b});
		G[b].push_back({c,a});
	}
	dijkstra(1,N);
	S[0]={dist[N][0],"me"};
	S[1]={dist[N][1],"Gon"};
	S[2]={dist[N][2],"Killua"};
	sort(S,S+3);
	for(auto &s:S)
		cout << s.s << '\n';

}
