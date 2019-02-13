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
	int p=(long long)ceil((double)(n*n)/2.0);
	bool  flag=!(n&1);
	while(q--){
		int r,c;
		cin >> r >> c;
		//x--,y--;
		if(flag){
			cout << (r-1)*(n/2) + ((!(c&1))?(c-1):c)/2 + 1 + (((r+c)&1)?p:0) << '\n';
		}else{
			int s=0;
			if((r-1)&1) s+=(n/2);
			s+=((n/2)*((r-1)/2));
			s+=((n/2+1)*((r-1)/2));
			//cout << s << "*" << (((r+c)&1)?p:0) << '\n';
			cout << s + (((r&1 and !(c&1))or(!(r&1) and (c&1)))?(c-1):c)/2 + 1 + (((r+c)&1)?p:0) << '\n';
		}
	}
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
