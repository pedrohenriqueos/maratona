#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi 3.14159265358979323846264338327950288
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

int N,K,a;
int val[15000002];
int main(){
	cin >> N >> K;
	int m=inf,teste=inf,parc=0,saida=0;
	vi A;
	A.assign(N,0);
	REP(i,N){
		cin >> A[i];
		parc+=A[i];
		if(i>=(K-1)){
			if(parc<teste)
				teste=parc,saida=i-K+2;
			parc-=A[i-K+1];
		}
	}
	/*REP(i,N-K+1){
		int parc=0,cont=0;
		FOR(j,i,i+K)
			parc+=A[j];
		if(parc<teste)
			teste=parc,saida=i+1;
		if(parc==K) break;
	}*/
	cout << saida;
}
