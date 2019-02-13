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

const int mod = 998244353;
int fexp(int base,int exp){
	if(exp==0) return 1;
	if(exp==1) return base;
	int ans=1;
	ans*=(fexp(base,exp/2)%mod);
	ans=(ans*ans)%mod;
	if(exp&1)
		ans=(ans*base)%mod;
	return ans;
}


int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	map<int,int> Map;
	int N,cont=0;
	cin >> N;
	vector<int> A(N);
	forn(i,N){
		cin >> A[i];
		Map[A[i]]=i;	
	}
	forn(i,N){
		int fim=Map[A[i]];
		cont++;
		while(i<fim){
			fim=max(fim,Map[A[i]]);
			i++;
		}
	}
	cont--;
	cout << fexp(2,cont) << '\n';
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
