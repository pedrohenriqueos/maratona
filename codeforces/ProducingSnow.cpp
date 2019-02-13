#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi 3.14159265358979323846264338327950288
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(long long i=a;i<n;i++)
#define FORI(i,a,n) for(long long i=a;i>=n;i--)
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

ll N,D[100002],Ne[100002];
int main(){
	scanf("%lld",&N);
	REP(i,N)
		scanf("%lld",&Ne[i]);
	REP(i,N)
		scanf("%lld",&D[i]);
	queue<ll> q;
	REP(i,N){
		ll saida=0;
		q.push(Ne[i]);
		int l=q.size();
		REP(j,l){
			ll k=q.front();
			q.pop();
			ll a=min(k,D[i]);
			k-=a;
			saida+=a;
			if(k!=0) q.push(k);
		}
		if(i!=0) printf(" ");
		printf("%lld",saida);
	}
	printf("\n");
}
