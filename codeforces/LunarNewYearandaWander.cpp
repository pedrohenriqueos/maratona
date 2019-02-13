#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define all(a) a.begin(),a.end()
#define db(a) cerr << #a << " = " << a << '\n';
#define _ << " , " << 
#define fora(i,a,N) for(int i=a;i<=N;i++)
#define forn(i,N) for(int i=0;i<N;i++)
#define fori(i,N,a) for(int i=N;i>=a;i--)

typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;

vector<int> G[100002];
vector<int> out;
priority_queue<int,vector<int>,greater<int>> pq;
int cor[100005],N,M,prox=2;
void dfs(int v){
	if((int)out.size()==N) return ;
	cor[v]=1;
	out.pb(v);
	for(auto u:G[v])
		pq.push(u);
	int k=100001;
	while(cor[k]){
		if(pq.empty()) break;
		k=pq.top();
		pq.pop();
	}
	if(k==100001) return ;
	dfs(k);
}

bool cmp(int a,int b){
	string s1 = to_string(a);
	string s2 = to_string(b);
	if((int)s1.size()==(int)s2.size()){
		for(int k=0;k<(int)s1.size();k++)
			if(s1[k]!=s2[k])
				return s1[k]<s2[k];
	}else
		return (int)s1.size()<(int)s2.size();
	return a<b;
}

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cor[100001]=1;
	cin >> N >> M;
	map<ii,int> Map;
	while(M--){
		int u,v;
		cin >> u >> v;
		if(Map.count({u,v})>0) continue;
		if(u==v) continue;
		Map[{u,v}] = Map[{v,u}] = 2;
		G[u].pb(v);
		G[v].pb(u);
	}
	
	dfs(1);
	for(auto &a:out)
		cout << a << " ";
	puts("");
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
