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
	
	int N;
	cin >> N;
	vector<int> A(N);
	for(auto &a:A) cin >> a;
	sort(all(A));
	set<int> S;
	int a = A[N-1],b=0;
	for(int j=1;j*j<=A[N-1];j++)
		if(A[N-1]%j==0)
		S.insert(A[N-1]/j),S.insert(j);
	int save=0;
	for(int i=0;i<(N-1);i+=2)
		if(A[i]==A[i+1]) b=A[i],save=i+2;
		else break;
	for(int i = 0;i<(int)A.size();i++)
		if(S.find(A[i])!=S.end()){
			S.erase(A[i]);
			A.erase(A.begin()+i);
			i--;	
		}
	cout << a << " " << A[(int)A.size()-1] << '\n';
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
