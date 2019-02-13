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

int N,L;
int gcd(int a,int b){
	return ((b==0)?a:gcd(b,a%b));
}
int main(){
	cin >> N >> L;
	vi A(N);
	int prod=1,m=0;
	pair<int,int> saida=mp(0,0);
	for(auto &a:A){ cin >> a,prod*=a;
		m=max(m,a);
	}
	FOR(j,2,L+1){
		int gcdm=j;
		FOR(i,0,N)
			gcdm=gcd(max(gcdm,A[i]),min(gcdm,A[i]));
		int mmc=(prod*j)/gcdm;
		int T[min(mmc+1,100000)];
		memset(T,0,sizeof T);
		for(auto &a:A){
			FOR(k,m,min(mmc+1,100000)){
				if((a*k)>min(mmc+1,100000)) break;
				T[a*k]++;
				if(T[a*k]>saida.f){
					saida.f=T[a*k];
					saida.s=j;
				}
			}
		}
	}
	cout << saida.s << '\n';
}
