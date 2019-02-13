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
	
	int n,q;
	cin >> n >> q;
	vi A(n),pref(n);
	forn(i,n){
		cin >> A[i];
		if(i==0) pref[i]=A[i];
		else pref[i]=pref[i-1]+A[i];
	}
	//forn(i,n)
		//cout << pref[i] << "_";
	//cout << '\n';
	int sum=0;
	while(q--){
		int a;
		cin >> a;
		sum+=a;
		int k=lower_bound(pref.begin(),pref.end(),sum)-pref.begin();
		if(k<n and pref[k]>sum)
			k--;
		//cout << k << " " << pref[k] << " " << sum << '\n'; 
		if(k>=(n-1)){
			sum=0;
			cout << n << '\n';
		}else{
			cout << n-k-1 << '\n';
		}
	}
	
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
