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

int N,L;
ll a;

int main(){
	cin >> N >> L;
	vll A(N);
	double saida=0;
	for(auto &a:A) cin >> a;
	if(N==1){
		cout << max((double)A[0],(double)L-A[0]);
		return 0;
	}
	sort(all(A));
	if(A[0]==0){
		saida = (double)(A[1]/2.0);
	}else
		saida = (double)(A[0]);
	FOR(i,1,N)
		saida = max((double)(A[i]-A[i-1])/2.0,saida);
	saida = max((double)(L-A[N-1]),saida);
	cout << fixed << setprecision(10) << saida;
}
