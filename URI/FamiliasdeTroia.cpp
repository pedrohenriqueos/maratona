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

int N,M,p[10000000],a,b;

int find(int u){
	return (u==p[u])?u:p[u]=find(p[u]);
}

void join(int u,int v){
	u=find(u),v=find(v);
	p[v]=u;
}

int main(){
	cin >> N >> M;	
	FOR(i,1,N+1)
		p[i]=i;
	while(M--){
		cin >> a >> b;
		join(a,b);
	}
	vi A;
	FOR(i,1,N+1){
		int x=find(i);
		if(find(all(A),x)==A.end())
			A.pb(x);
	}
	cout << A.size() << '\n';
}
