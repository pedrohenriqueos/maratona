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

ll N;
int main(){
	cin >> N;	
	vll A(N);
	for(auto &a:A) cin >> a;
	ll saida=0;
	REP(i,N){
		ll parc=0;
		bool flag=true;
		for(int j=i;j!=i or flag;j++){
			parc+=A[j];
			if(parc<=0) break;
			if(j==(N-1)) j=-1,flag=false;
			saida=max(saida,parc);
		}
	}
	cout << saida << '\n';
}
