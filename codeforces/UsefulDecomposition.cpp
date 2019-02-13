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

const int MAXN=100002;

int N,a,b,cor[MAXN];
vi G[MAXN],A,out;
bool fl;

void dfs(int v){
	cor[v]=1;
	for(const int &u:G[v]){
		if(!cor[u]){
			if(v==A[0]) fl=true;
			dfs(u);
		}
	}
	if(fl){
		out.pb(v);
		fl=false;
	}
}

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N;
	int size=N;
	N--;
	while(N--){
		cin >> a >> b;
		G[a].pb(b);
		G[b].pb(a);
	}
	fora(i,1,size){
		if((int)G[i].size()>=3)
			A.pb(i);
	}
	if((int)A.size()==0){
		fora(i,1,size){
			if((int)G[i].size()==1){
				A.pb(i);
				break;
			}
		}
	}else if((int)A.size()>1)
		return puts("No");
	dfs(A[0]);
	puts("Yes");
	printf("%d\n",(int)out.size());
	for(auto a:out)
		printf("%d %d\n",A[0],a);
	
	
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
