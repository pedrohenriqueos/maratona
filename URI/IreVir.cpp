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

int N,M,a,b,c,cor[2002];
bool flag;
vi G[2002];
void dfs(int v,int z){
	if(v==z) flag=true;
	if(flag) return ;
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u] and !flag)
			dfs(u,z);
}
int main(){
	while(cin >> N >> M){
		if(!N and !M) break;
		vii A;
		bool saida=false;
		REP(i,N+2)
			G[i].clear();
		while(M--){
			cin >> a >> b >> c;
			G[a].pb(b);
			if(c==1)
				A.pb(mp(b,a));
			else
				G[b].pb(a);
		}
		REP(i,A.size()){
			memset(cor,0,sizeof cor);
			flag=false;
			dfs(A[i].f,A[i].s);
			if(!flag){
				saida=false;
				break;
			}
		}
		cout << saida << '\n';
	}
}
