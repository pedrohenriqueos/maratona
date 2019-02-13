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
vector< vector<int> > A;
int 
int dp(int id,int b,int r){
	if(id==N) return 0;
	int ans=0;
	if(A[id][0]>b and A[id][1]>r)
		ans = dp(id+1,A[id][0],A[id][1])+A[id][2];
	return ans=max(ans,dp(id+1,b,r));
}

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N;
	A = vector< vector<int> > (N);
	for(int i=0;i<N;i++){
		A[i]=vector<int> (3);
		for(auto &a:A[i])
			cin >> a;
	}
	sort(all(A));
	cout << dp(0,0,0) << '\n';
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}



















