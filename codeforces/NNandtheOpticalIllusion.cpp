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

const double EPS = 0.00000001;
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	double N,R;
	cin >> N >> R;
	double l=0.0,r=1000000.0, mid,resp=0.0;
	double ang = 360.0/N;
	ang/=2.0;
	double val2=sin((ang*pi)/180.0);
	while(fabs(r-l)>EPS){
		mid = (l+r)/2.0;
		double val1=mid/(R+mid);
		//cout <<  fixed << setprecision(7) << val1 <<  " " << val2 << '\n';
		if(val1>val2)
			r=mid,resp=mid;
		else
			l=mid;
	}
	cout << fixed << setprecision(7) << resp << '\n';
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
