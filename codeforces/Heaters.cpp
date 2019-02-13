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

int n,r,out;
bool check(vector<int> &v){
	forn(i,n)
		if(!v[i])
			return false;
	return true;
}
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> r;
	vector<int> a(n),v(n,0);
	forn(i,n) cin >> a[i];
	int i=r-1;
	set<int> s;
	while(true){
		//cout << bool(s.find(i)!=s.end()) << " " <<  bool(check(v)) << " " << bool(i<0) << '\n';
		if(s.find(i)!=s.end() or check(v) or i<0)
			break;
		if(i<n and a[i]){
			//cout << i << ' ';
			v[i]=1;
			fora(j,1,r-1){
				if((i+j)<n) v[i+j]=1;
				if((i-j)>=0) v[i-j]=1; 
			}
			s.insert(i);
			out++;
			i = i+2*r-1;
		}else
			i--;
		
	}
	if(!check(v))
		return cout << "-1\n",0;
	cout << out << '\n';
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
