#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORI(i,a,n) for(int i=a;i>=n;i--)
#define REP(i,n) FOR(i,0,n)
#define all(a) a.begin(),a.end()

typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
long double dist[200][200];
long double N,M,R;
pair<int,int> a,b;
long double Dijkstra(ii v,ii z){
	REP(i,N)
		REP(j,M)
			dist[i][j]=(1LL<<62)-1;
	dist[v.first][v.second]=0.0;
	priority_queue< pair<long double, ii > > pq;
	pq.push(make_pair(0.0,v));
	while(!pq.empty()){
		int uf = pq.top().second.first;
		int us = pq.top().second.second;
		long double d = -pq.top().first;
		pq.pop();
		if(d>dist[uf][us]) continue;
		if(uf==z.f and us==z.s) return dist[z.f][z.s];
		for(int i=0;i<4;i++){
			if((uf+dx[i])>=0 and (uf+dx[i])<=N and (us+dy[i])>=0 and (us+dy[i])<=M){
				if(dx[i]!=0){
					if(dist[uf+dx[i]][us+dy[i]]>(d+(pi*(R*(us+dy[i])))/N)){
						dist[uf+dx[i]][us+dy[i]]=(d+(pi*(R*(us+dy[i])))/N);
						pq.push(make_pair(-dist[uf+dx[i]][us+dy[i]],make_pair(uf+dx[i],us+dy[i])));
					}
				}else{
					if(dist[uf+dx[i]][us+dy[i]]>(d+R)){
						dist[uf+dx[i]][us+dy[i]]=(d+R);
						pq.push(make_pair(-dist[uf+dx[i]][us+dy[i]],make_pair(uf+dx[i],us+dy[i])));
					}
				}
			}
		}
	}
	return dist[z.first][z.second];
}

int main(){	
	cin >> N >> M >> R;
	cin >> a.f >> a.s >> b.f >> b.s;
	R/=M;
	long double out= Dijkstra(a,b);
	cout << out << '\n';
}









