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
typedef vector< pair<ll,ll> > vpll;
ll N,K1,K2;
int main(){
	cin >> N >> K1 >> K2;
	vll A(N),B(N),C(N);
	for(auto &a:A) cin >> a;
	for(auto &b:B) cin >> b;
	REP(i,N)C[i]=abs(A[i]-B[i]);
	ull K=K1+K2;
	ull saida=0LL;	
	while(K--){
		int k=0,m=-1;
		REP(i,N)
			if(C[i]>k){
				m=i;
				k=C[i];
			}
		if(m==-1){
			K++;
		 break;
		}
		C[m]--;
	}
	REP(i,N){
		saida+=(C[i]*C[i]);
	}
	cout << saida+(K%2) << '\n';
}
