#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define REP(i,n) FOR(i,0,n)
#define mabs(a) ((a>0)?a:-a)
#define mmin(a,b) ((a>b)?b:a)
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int main(){
	int N;
	while(scanf("%d",&N) and N){
		long long int saida=0,total=0;
		vector<int> A(N);
		REP(i,N){ 
			scanf("%d",&A[i]);
			total+=A[i];
			saida+=abs(total);
		}
		printf("%lld\n",saida);
	}

}
