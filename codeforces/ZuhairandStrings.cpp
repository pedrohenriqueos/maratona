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


int V[30];
int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N,K;
	cin >> N >> K;
	string str;
	cin >> str;
	char c = str[0];
	int cont=0;
	forn(i,N){
		if(str[i]==c)
			cont++;
		else
			cont=1,c=str[i];
		if(cont ==K)
			V[(int)(c-'a')]++,cont=0;
	}
	int out=0;
	forn(i,29)
		out=max(out,V[i]);
	cout << out << '\n';
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
