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
	
	int N;
	cin >> N;
	vector<int> A(N);
	for(auto &a:A) cin >> a;
	if(N>100){
		cout << "YES\n";
		return 0;
	}
	forn(i,N)
		forn(j,N)
			if(j!=i)
				forn(k,N)
					if(k!=j and k!=i){
						if(A[i]<(A[j]+A[k]) and A[i]>abs(A[j]-A[k]) and A[j]<(A[i]+A[k]) and A[j]>abs(A[i]-A[k]) and A[k]<(A[j]+A[i]) and A[k]>abs(A[j]-A[i]))
							return cout << "YES\n",0;
					}
	
	cout << "NO\n";
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
