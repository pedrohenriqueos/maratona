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

int X,d;
int main(){
	scanf("%d %d",&X,&d);
	ll soma=0LL;
	vi S;
	ll aux=X;
	int k=0;
	ll x=0LL;
	while((aux>>k)){
		if((aux>>k)&1){
			S.pb(k);
			soma+=k;
			x+=((1LL<<k)-1);
		}
		k++;
	}
	reverse(all(S));
	soma+=(X-x);
	X-=x;
	while(X--)
		S.pb(1);
	if(soma>10000){
		printf("-1\n");
		return 0;
	}
	printf("%lld\n",soma);
	ll j=1;
	REP(i,S.size()){
		while(S[i]--){
			printf("%lld ",j);
		}
		j+=d+1;
	}
	printf("\n");
}
