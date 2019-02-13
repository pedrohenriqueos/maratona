#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
//#define pi 3.141592653589793
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define REP(i,n) FOR(i,0,n)

typedef vector<int> vi;
typedef long long ll;
typedef unsigned long long  ull;
typedef pair<int,int> pii;
typedef pair<int, pii> iii;
typedef vector< ll > vll;
typedef vector< pii > vii;
typedef vector< iii > viii;

vector < pair< int, pii > > G[1002][1002];
int dist[1002][1002],N,M,K;
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
	cin >> N >> M >> K;
	char Matriz[N][M];
	REP(i,N){
		REP(j,M){
			cin >> Matriz[i][j];
			if(Matriz[i][j]=='.'){
				if((j-1)>=0 and Matriz[i][j-1]!='#'){
					G[i][j].pb(mp(1,mp(i,j-1)));
					G[i][j-1].pb(mp(1,mp(i,j)));
				}
				if((i-1)>=0 and Matriz[i-1][j]!='#'){
					G[i][j].pb(mp(1,mp(i-1,j)));
					G[i-1][j].pb(mp(1,mp(i,j)));
				}
			}
		}
	}
	int x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int saida = Dijkstra(mp(x1-1,y1-1),mp(x2-1,y2-1));
	(saida ==inf)?cout << "-1\n":cout << saida << '\n';
}
