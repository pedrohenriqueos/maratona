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

int N,M,p[102],a,b,caso;

int find(int u){
	return ((u==p[u])?u:p[u]=find(p[u]));
}
int join(int u,int v){
	u=find(u),v=find(v);
	p[u]=v;
}

int main(){
	while(cin >> N >> M){
		if(!N and !M) break;
		FOR(i,1,N+1) p[i]=i;
		while(M--){
			cin >> a >> b;
			join(a,b);
		}
		int m=find(1);
		bool flag=true;
		FOR(i,2,N+1)
			if(find(i)!=m){
				flag=false;
				break;
			}
		cout << "Teste " << ++caso << '\n';
		cout << ((flag)?"normal\n\n":"falha\n\n");
	}
}
