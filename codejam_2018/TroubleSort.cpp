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

int T,N;

int main(){
	int cas=1;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		vll A,B;
		ll a;
		REP(i,N){
			scanf("%lld",&a);
			if(i%2) B.pb(a);
			else A.pb(a);
		}
		sort(all(A));
		sort(all(B));
		bool flag=true;
		int x=-1;
		REP(i,A.size()){
			if(i<B.size() and A[i]>B[i]){
				x=i*2;
				flag=false;
				break;
			}
			else if((i+1)<A.size() and A[i+1]<B[i]){
				x=i*2+1;
				flag=false;
				break;
			}
		}
		printf("Case #%d: ",cas++);
		if(flag) printf("OK\n");
		else printf("%d\n",x);
	}	
}
