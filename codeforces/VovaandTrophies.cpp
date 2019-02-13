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
	string str;
	cin >> str;
	vector<int> A;
	bool flag=(str[0]=='G');
	int cont=0,out=0;
	forn(i,N){
		if(flag and str[i]=='S')
			A.pb(cont),cont=0,flag=false;
		else if(!flag and str[i]=='G')
			A.pb(cont),cont=0,flag=true;
		cont++;
	}
	if(cont) A.pb(cont);
	flag = ((str[0]=='G' and (int)A.size()>=3) or (int)A.size()>=4);
	for(int i=!(str[0]=='G');i<(int)A.size();i+=2)
		out=max(out,A[i]+flag);

	flag = ((str[0]=='G' and (int)A.size()>=5) or ((int)A.size()>=6));
	for(int i=((str[0]=='G')?1:2);i<(int)A.size()-1;i+=2)
		if(A[i]==1)
			out=max(out,A[i-1]+A[i+1]+flag);
			
	cout << out << '\n';
	
	
			
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
