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
	
	int T,n,x,y,d;
	cin >> T;
	while(T--){
		cin >> n >> x >> y >> d;
		if(abs(y-x)%d==0)
			cout << abs(y-x)/d << '\n';
		else{
			int a1=inf,a2=inf;
			if((y-1)%d==0)
				a1=(long long)ceil((double)x/(double)d)+(y-1)/d;
			if((n-y)%d==0)
				a2=(long long)ceil((double)(n-x)/(double)d)+(n-y)/d;
			if(a1==a2 and a1==inf)
				cout << "-1\n";
			else 
				cout << min(a1,a2) << '\n';
		}
	}
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
