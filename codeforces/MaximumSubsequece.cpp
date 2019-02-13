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

int main(){
	int N,m,c=0;
	cin >> N >> m;
	vi A(N),B,C;
	for(auto &a:A){
		cin >> a,a%=m;
		if(c%2) B.pb(a);
		else C.pb(a);
		c++;
	}
	int parc1=0,parc2=0;
	REP(i,B.size()){
		if(i==0)
			parc1=B[i];
		else
			parc1=max(parc1,B[i]=(B[i]+B[i-1])%m);
	}
	REP(i,C.size()){
		if(i==0)
			parc2=C[i];
		else
			parc2=max(parc2,C[i]=(C[i]+C[i-1])%m);
	}
	if(parc1>parc2){
		parc1=max(parc1,(parc1+parc2)%m);
				cout << parc1 << '\n';
	}else{
		parc2=max(parc2,(parc1+parc2)%m);
		cout << parc2 << '\n';
	}
}
