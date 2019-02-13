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

int N;
pair<int,int> A[200002];

inline bool check(int l,int r){
	vi ans;	
	forn(i,N){
		int next=-1;
		if(A[l].f==r)
			next=A[l].s;
		else if(A[l].s==r)
			next=A[l].f;
		else return true;
		ans.pb(next+1);
		l=r;
		r=next;
	}
	for(auto a:ans)
		cout << a << " ";
	puts("");
	return false;
}

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N;
	forn(i,N){
		cin >> A[i].f >> A[i].s;
		A[i].f--,A[i].s--;
	}
	if(check(0,A[0].f))
		check(0,A[0].s);
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
