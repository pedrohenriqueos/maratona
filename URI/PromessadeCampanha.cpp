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

int T,N,M,p[102],a,b;

int find(int u){
	return (p[u]==u)?u:p[u]=find(p[u]);
}

void join(int u,int v){
	u=find(u),v=find(v);
	p[v]=u;
}

int main(){
	int caso=0;
	cin >> T;	
	while(T--){
		set<int> S;
		cin >> N >> M;
		REP(i,N+1) p[i]=i;
		while(M--){
			cin >> a >> b;
			if(find(a)!=find(b))
				join(a,b);
		}
		FOR(i,1,N+1) S.insert(find(i));
		cout << "Caso #" << ++caso;
		if(S.size()==1)
			cout << ": a promessa foi cumprida\n";
		else
			cout << ": ainda falta(m) " << S.size()-1 << " estrada(s)\n"; 
	}
}
