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

int N,M,arr[(int)(1<<19)],tree[(int)(1<<20)];
void add(int k,int x){
	k+=(1<<N);
	tree[k]=x;
	bool flag=true;
	for(k/=2;k>=1;k/=2,flag=!flag){
		if(flag)
		tree[k]=tree[2*k]|tree[2*k+1];
		else
		tree[k]=tree[2*k]^tree[2*k+1];
	}
}

int main(){
	cin >> N >> M;
	int aux,a,b;
	REP(i,(int)(1<<N)){
		cin >> aux;
		add(i,aux);
	}
	while(M--){
		cin >> a >> b;
		add(a-1,b);
		cout << tree[1] << '\n';
	}
}




