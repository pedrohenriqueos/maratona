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
const int Ma=(int)1e5+1;

int cor[2*Ma];
vi G[2*Ma];
int N,M,X,Y;
bool check(int w){
	int cont=0;
	for(int i:G[w])
		if(cor[i])
			cont++;
	if((cont*2)>=G[w].size())
		return true;
	return false;
}
void bfs(int v,int z){
	cor[v]=1;
	queue<int> q;
	q.push(v);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int w:G[u]){
			if(check(w)){
				q.push(w);
				cor[w]=1;
				if(w==z) return ;
			}
		}

	}
}
int main(){
	cin >> N >> M >> X >> Y;
	while(M--){
		int a,b;
		cin >> a >> b;
		G[a].pb(b);
		G[b].pb(a);
	}
	bfs(Y,X);
	cout << ((cor[X])?"leave\n":"stay\n");
}
