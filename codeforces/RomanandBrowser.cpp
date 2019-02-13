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
	
	int N,k,q1=0,q2=0,out=0;
	cin >> N >> k;
	vector<int> A(N);
	for(auto &a:A){
		cin>>a;
		if(a==1) q1++;
		else q2++;	
	}
		for(int b=0;b<N;b++){
			int r1=0,r2=0;
			if(A[b]==1)
				r1++;
			else r2++;
			for(int x=1;x<N;x++){
				if((b+x*k)<N)
					if(A[(b+x*k)]==1)
						r1++;
					else r2++;
				if((b-x*k)>=0)
					if(A[(b-x*k)]==1)
						r1++;
					else r2++;
				if((b+x*k)>=N and (b-x*k)<0)
					break;
			}
			out=max(out,abs((q1-r1)-(q2-r2)));
		}
	cout << out << '\n';
	
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
