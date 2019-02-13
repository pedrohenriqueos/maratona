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

int S[15000001],val[15000001],N,m,A[300002],out=0;
set< int > Set; 
vector<int> primes;
inline void crivo(){
	for(int i=2;i<15000001;i++){
		if(!S[i]){
			int ans=(val[i]);
			for(int j=2;j*i<15000001;j++)
				S[i*j]=i,ans+=val[i*j];
			out=(out<ans)?ans:out;
		}
	}
}

int32_t main(){
	scanf("%d",&N);
	int x;
	REP(i,N){
		scanf("%d",&A[i]);
		if(i==0) x=A[i];
		else x=__gcd(x,A[i]);
		Set.insert(A[i]);
	}
	if((int)Set.size()==1)
		return !printf("-1\n");
	REP(i,N){
		A[i]/=x;
		val[A[i]]++;
	}
	crivo();
	printf("%d\n",N-out);
}



















