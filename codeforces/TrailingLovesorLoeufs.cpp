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
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n,b,out=1e18;
	cin >> n >> b;
	for(int i=2;i*i<=b;i++){
		if(b%i==0){
			int q = 0;
			while(b%i==0)
				q++,b/=i;
			int aux=n,k=0;
			while(aux >=i){
				k+=(aux/i);
				aux/=i;
			}
			out = min(out,k/q);
		}
	}
	if(b>1){
		int k=0;
		while(n>=b){
			k+=(n/b);
			n/=b;
		}
		out=min(out,k);
	}
	cout << out << '\n';
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}



















