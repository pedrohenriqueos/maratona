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
	int N,M,a,m=0,x=1,dif=0;
	cin >> N >> M;
	vi out(M),A(N+1,0);
	forn(i,M){
		cin >> a;
		//a--;
		A[a]++;
		dif+=(A[a]==1);
		if((i+1)>=x*N){
			if(dif==N){
				dif=0;
				out[i]=1;
				fora(j,1,N){
					A[j]--;
					dif+=(A[j]>0);
				}
				x++;
			}
		}	
	}
	forn(i,M)
		cout << out[i];
	puts("");
	
	
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
