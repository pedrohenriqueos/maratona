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
	
	int n,m,k;
	cin >> n >> m >> k;
	vi A(n);
	for(auto &a:A) cin >> a;
	vi B=A;
	sort(all(B));
	int l,x=m*k,out=0;
	for(int i=n-1;i>=0 and x;i--,x--){
		out+=B[i];
		if(x<=1) l=i;
	}
	cout << out << '\n';
	int cont = 0;
	for(int i=0;i<n;i++){
		if(A[i]>=B[l]){
			cont++;
			if(cont==m and k>1){
					cout << i+1 << " ";
				cont=0;
				k--;
			}
			if(A[i]==B[l]) l++;
		}
	}

#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}



















