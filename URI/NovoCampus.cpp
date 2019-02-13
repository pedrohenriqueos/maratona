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

int p[1005];

int find(int u){
	return (u==p[u])?u:p[u]=find(p[u]);
}

void join(int u,int v){
	u=find(u),v=find(v);
	p[v]=u;
}
int main(){
	int N,M;
	while(cin >> N >> M){
	REP(i,N+1) p[i]=i;
	ull saida=0;
	priority_queue<iii, vector<iii>,greater<iii> > pq;
	while(M--){
		int a,b,c;
		cin >> a >> b >> c;
		pq.push(mp(c,mp(a,b)));
	}
	while(!pq.empty()){
		iii k= pq.top();
		pq.pop();
		if(find(k.s.f)!=find(k.s.s)){
			join(k.s.f,k.s.s);
			saida+=k.f;
		}
	}
	int k=find(1);
	bool flag=false;
	FOR(i,2,N+1)
		if(find(i)!=k){
			cout << "impossivel\n";
			flag=true;
			break;
		}
	if(!flag)
		cout << saida << '\n';
	}
}
