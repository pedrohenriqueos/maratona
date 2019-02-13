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

string str1,str2;
vi G[100002];
int cor[100002],dist[100002],i;
int dfs(int v){
	cor[v]=1;
	for(int u:G[v])
		if(!cor[u]){
			dist[u]=max(dist[v],dist[u]+1);
			dfs(u);
		}
}

int main(){
	map<string,ii> M;
	vector<string> A,B;
	pair< map<string,ii>::iterator,bool> r;
	while(cin >> str1 >> str2){
		r=M.insert(mp(str1,mp(i,1)));
		if(r.s) i++;
		else M[str1].s++;
		r=M.insert(mp(str2,mp(i,1)));
		if(r.s) i++;
		else M[str2].s++;
		G[M[str1].f].pb(M[str2].f);
	}
	REP(j,i){
		if(!cor[j]){
			dfs(j);
		}
	}
	REP(j,i){
		if(dist[j]==0){
			B.pb()
		}
	}
}
