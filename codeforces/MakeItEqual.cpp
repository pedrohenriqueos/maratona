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
	
	int N,K,sum=0,out=0;
	cin >> N >> K;
	vector<int> A(N);
	for(auto &a:A) cin >> a,H[a]++;
	fori(i,200000,1){
		if(H[i]==N)
			break;
		if(sum+H[i]<=K){
			sum+=H[i];
			H[i-1]+=H[i];
			H[i]=0;
		}else{
			//int x = K-sum;
			//H[i]-=x;
			//H[i-1]+=x;
			sum=0;
			out++;
			i++;
		}
	}
	if(sum) out++;
	cout << out << '\n';
	
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
