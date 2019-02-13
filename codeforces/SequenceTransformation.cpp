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

int H[200002];
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N,x=1,p=2;
	cin >> N;
	if(N==3){
		cout << "1 1 3\n";
		return 0;
	}
	while(N>0){
		forn(i,N-N/2)
			cout << x << " ";
		x=p;
		p=2*p;
		N/=2;
		if(N==3){
			cout << x << " " << x << " " << 3*x << '\n';
			return 0;
		}
	}
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
