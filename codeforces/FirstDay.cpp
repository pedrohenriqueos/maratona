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

int N,vis[100001],cor[100001],b[100001],x,saida;
vi G[100001],S;
void bfs(int v){
	cor[v]=1;
	S.pb(v);
	queue<int> q;
	q.push(v);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int w:G[u])
			if(!cor[w]){
				cor[w]=(cor[u]==1)?2:1;
				if(cor[w]==1){
					S.pb(w);
				}
				q.push(w);
			}

	}

}
bool match(int u){
	if(vis[u]==x) return 0;
	vis[u]=x;
	for(int v:G[u])
		if(!b[v] or match(b[v])){
			return b[v]=u;
		}
	return 0;
}
int main(){
	int N,M,a,b;
	cin >> N >> M;
	while(M--){
		cin >> a >> b;
		G[a].pb(b);
		G[b].pb(a);
	}
	bfs(1);
	REP(i,S.size()){
		x++;
		saida+=match(S[i]);
	}
	cout << N-saida << '\n';
}
