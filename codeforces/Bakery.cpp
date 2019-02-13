#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi 3.14159265358979323846264338327950288
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

int N,M,K,a,b,d,saida,x[100002];
vii G[100002];

void bfs(int v){
	for(ii u:G[v])
		if(!x[u.s]) saida=min(saida,u.f);
}

int main(){
	cin >> N >> M >> K;
	while(M--){
		cin >> a >> b >> d;
		G[a].pb(mp(d,b));
		G[b].pb(mp(d,a));
	}
	vi A(K);
	for(auto &a:A)
		cin >> a,x[a]=1;
	saida=inf;
	for(auto &a:A){
		bfs(a);
	}
	cout << ((saida==inf)?-1:saida);
}
