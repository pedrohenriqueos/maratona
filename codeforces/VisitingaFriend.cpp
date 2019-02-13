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

int N,M,a,b,cor[102];
bool flag;
vi A[102];
void dfs(int v){
	cor[v]=1;
	if(v==M){
		flag=true;
		return ;
	}
	for(int u:A[v])
		if(!cor[u])
			dfs(u);
}
int main(){
	cin >> N >> M;
	while(N--){
		cin >> a >> b;
		FOR(i,a+1,b)
			A[a].pb(i);
		A[a].pb(b);
	}
	flag=false;
	dfs(0);
	cout << ((flag)?"YES\n":"NO\n");
}
