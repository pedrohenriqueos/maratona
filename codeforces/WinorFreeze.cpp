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

inline bool prime(int x){
	for(int i=2;i*i<=x;i++)
		if(x%i==0)
			return false;
	return true;
}

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	if(prime(N))
		return !printf("1\n0\n");
	int rs=-1,val=N;
	for(int i=2;i*i<=N;i++){
		if(N%i==0){
			if(rs==-1){ rs=i; N/=i;}
			while(N%i==0){
				N/=i,rs*=i;
				if(rs!=i and rs!=val){
					return !printf("1\n%lld\n",rs);
				}
			}
		}
	}
	puts("2");
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
