#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f3f3f3f3f
#define f first
#define s second
#define int long long
vector< pair<int,int> > G[100002];
int dist[100002][2];
int N,M;
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
		//if(dist[z][0]!=inf and dist[z][1]!=inf) return ;
		if(d>dist[u][0] and d>dist[u][1]) continue;
		for(pair<int,int> j:G[u]){
			int w=j.s,_d=j.f;
			if(p){
				if(dist[w][0]>_d+dist[u][1]){
					dist[w][0]=_d+dist[u][1];
					pq.push({-dist[w][0],{w,0}});
				}
			}else{
				if(dist[w][1]>_d+dist[u][0]){
					dist[w][1]=_d+dist[u][0];
					pq.push({-dist[w][1],{w,1}});
				}
			}
		}
	}
}

main(){
	scanf("%lld %lld",&N,&M);
	while(M--){
		int a,b,c;
		scanf("%lld %lld %lld",&a,&b,&c);
		G[a].push_back({c,b});
		G[b].push_back({c,a});
	}
	dijkstra(1,N);
	//for(int j=0;j<2;j++){
		//for(int i=1;i<=N;i++)
			//cout << dist[i][j] << " ";
	//	cout << '\n';
	//}
	if(dist[N][0]==inf)
		cout << "-1\n";
	else
		cout << dist[N][0] << '\n';


}
