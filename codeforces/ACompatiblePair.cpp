#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f3f3f3f3f
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

int main(){
	ll N,M;
	cin >> N >> M;
	vll K(N),X(M),A,B;
	for(auto &a:K) cin >> a;
	for(auto &b:X) cin >> b;
	ll out=-1e9*1e9,km=-1e9;
	REP(i,K.size())
		REP(j,X.size()){
			if((K[i]*X[j])>out){
				out=K[i]*X[j];
				km=K[i];
			}
		}
	int cont=0;
	REP(i,K.size())
		if(K[i]==km)
			cont++;
	if(cont>1){
		cout << out;
		return 0;
	}
	out=-1e9*1e9;
	REP(i,K.size())
		if(K[i]!=km){
			REP(j,X.size())
				if((K[i]*X[j])>out){
				out=K[i]*X[j];
			}
		}
	cout << out << '\n';
}
