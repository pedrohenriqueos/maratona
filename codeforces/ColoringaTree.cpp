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
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ll > vll;
typedef vector< ii > vii;
typedef vector< iii > viii;

int N,cor[10002],corf[10002],saida;
vi G[10002],P[10002];
bool comp(){
	FOR(i,1,N+1){
		if(cor[i]!=corf[i]){
			return true;
		}
	}
	return false;
}
int dfs(int v,int a){
	cor[v]=corf[a];
	for(int u:G[v])
		dfs(u,a);
}
int bfs(int v){
	int quant=0;
	queue<int> q;
	q.push(v);
	while(!q.empty()){
		int u=q.front();
		if(corf[u]!=cor[u]){
			dfs(u,u);
			quant++;
		}
		q.pop();
		if(!comp())
			break;
		for(int w:G[u])
				q.push(w);
	}
	return quant;
}

int main(){
	cin >> N;
	int a;
	FOR(i,2,N+1){
		cin >> a;
		G[a].pb(i);
	}
	FOR(i,1,N+1) cin >> corf[i];
	saida =	bfs(1);	
	cout << saida << '\n';
}
