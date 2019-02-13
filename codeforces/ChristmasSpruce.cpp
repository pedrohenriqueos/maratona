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

int N,i,a,cor[1005];
vi G[1005];
bool flag;
void bfs(int v){
	queue<int> q;
	q.push(v);
	cor[v]=1;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		int cont=0;
		for(int w:G[u])
			if(G[w].size()==1) cont++;
		if(cont<3 and G[u].size()>1) flag=false;
		if(!flag) break;
		for(int w:G[u])
			if(!cor[w]){
				q.push(w);
				cor[w]=1;
			}
	}
}

int main(){
	cin >> N;	
	N--,i=2;
	while(N--){
		cin >> a;
		G[i].pb(a),G[a].pb(i);
		i++;
	}
	flag=true;
	bfs(1);
	cout << ((flag)?"Yes\n":"No\n");
}
