#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
#define m 102
typedef pair<int,int> pii;
int X,Y,fimx,fimy;
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
		int d = -pq.top().first;
		pq.pop();
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
int main(){
	int N,a,ant=0;
	list<string> s;
	cin >> N;
	for(int y=0;y<N;y++){
		string s1="";
		for(int x=0;x<N;x++){
			scanf("%d",&a);
			s1+=(char)(a+'0');
			if(x!=0){
				G[y][x].push_back(make_pair((int)(s1[x-1]-'0'),make_pair(y,x-1)));
				G[y][x-1].push_back(make_pair(a,make_pair(y,x)));
			}
			if(y!=0){
				string r = s.back();
				G[y][x].push_back(make_pair((int)(r[x]-'0'),make_pair(y-1,x)));
				G[y-1][x].push_back(make_pair(a,make_pair(y,x)));
			}
		}
		s.push_back(s1);
	}
	int saida = Dijkstra(make_pair(0,0),make_pair(N-1,N-1));
	cout << saida << '\n';
}
