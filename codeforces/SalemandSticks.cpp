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

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N,sum=0;
	cin >> N;
	vi A(N);
	forn(i,N)
		cin >> A[i],sum+=A[i];
	ii out={inf,inf};
	fora(i,1,1000){
		int parc=0;
		forn(j,N)
			parc+=(abs(A[j]-i)>1?(abs(A[j]-i)-1):0);
		if(parc<out.s)
			out={i,parc};
	}
	cout << out.f << " " << out.s << '\n';
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
