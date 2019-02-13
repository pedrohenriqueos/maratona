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
#define int long long

typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;

vi G[100002];
vi pref[100002];
int sz[100002];
int quant[100002];
bool cmp(ii a,ii b){
	return ((a.f==b.f)?a.s<b.s:a.f>b.f);
}
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N,M,a,b, m,out=0;
	cin >> N >> M;
	vector<ii> A(N);
	for(auto &a:A) cin >> a.s >> a.f;
	sort(all(A),cmp);
	forn(i,N){
		if(sz[A[i].s])
			pref[A[i].s].pb(A[i].f+pref[A[i].s][sz[A[i].s]-1]);
		else 
			pref[A[i].s].pb(A[i].f);
		if(pref[A[i].s][sz[A[i].s]]>0)
		quant[sz[A[i].s]]+=pref[A[i].s][sz[A[i].s]];
		sz[A[i].s]++;
	}
	fora(i,0,100000)
		out=max(out,quant[i]);
	cout << out << '\n';
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
