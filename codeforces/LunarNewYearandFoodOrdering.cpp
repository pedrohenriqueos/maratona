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

int32_t main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	
	int N,M;
	cin >> N >> M;
	vector<int> A(N),F(N,0);
	vector<int> C(N);
	priority_queue<ii,vector<ii> ,greater<ii> > pq;
	for(auto &a:A) cin >> a;
	int x=0;
	for(auto &b:C){
		cin >> b;
		pq.push({b,x++});
	}
	while(M--){
		int t,d,out=0;
		cin >> t >> d;
		t--;
		if(A[t]!=F[t]){
			int m = min(d,A[t]-F[t]);
			d-=m;
			F[t]+=m;
			out+=(m*C[t]);
		}
		while(d){
			if(pq.empty()){
				out=0;
				break;
			}
			ii k= pq.top();
			int m = min(d,A[k.s]-F[k.s]);
			d-=m;
			F[k.s]+=m;
			out+=(m*k.f);
			if(A[k.s]==F[k.s])
				pq.pop();
		}
		cout << out << '\n';
	}
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
