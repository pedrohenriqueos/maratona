#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORI(i,a,n) for(int i=a;i>=n;i--)
#define REP(i,n) FOR(i,0,n)
#define all(a) a.begin(),a.end()

typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int N,K,M,a,b,custo[100002],pai[100002];//sz[100002];
int find(int x){
	return ((pai[x]==x)?x:pai[x]=find(pai[x]));
}
void join(int a,int b){
	a=find(a),b=find(b);
	//if(a==b) return;
	//if(sz[a]>sz[b]) swap(a,b);
	pai[a]=b;
	//sz[b]+=sz[a];
	custo[b]=min(custo[a],custo[b]);
}

int main(){
	cin >> N >> K >> M;
	map<string,int> Map;
	string str;
	REP(i,N){
		pai[i]=i;//sz[i]=1;
		cin >> str;
		Map[str]=i;
	}
	REP(i,N) cin >> custo[i];
	while(K--){
		cin >> a;
		vi S(a);
		REP(i,a){
			cin >> S[i];
			if(i!=0) join(S[0]-1,S[i]-1);
		}
	}
	ll saida=0;
	string s;
	while(M--){
		cin >> s;
		saida+=custo[find(Map[s])];
	}
	cout << saida << '\n';
}
