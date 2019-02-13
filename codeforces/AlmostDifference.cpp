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
#define absm(a) ((a>0)?a:-a)
typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

bool ordem(ii a,ii b){
	return ((a.f==b.f)?(a.s<b.s):(a.f>b.f));
}
int main(){
	int N,a;
	ll saida=0;
	scanf("%d",&N);
	vii A;
	REP(i,N){ 
		scanf("%d",&a);
		A.pb(mp(a,i));
	}
	REP(i,N){
		FOR(j,i+1,N){
			if(abs(A[i].f-A[j].f)>1){
				cout << A[j].f << "*" <<  A[j].s << " " << A[i].f << "*" <<  A[i].s << '\n';
				saida++;
			}
		}
	}
	cout << saida << '\n';
	saida=0;
	cout << "_________\n";
	sort(A.begin(),A.end(),ordem);
	REP(i,N){
		cout << A[i].f << " " << A[i].s << '\n';
		FORI(j,N-1,i+1){
			if(abs(A[i].f-A[j].f)>1 and A[i].s>A[j].s){
				saida+=(A[j].f-A[i].f);
				cout << A[j].f << "*" <<  A[j].s << " " << A[i].f << "*" <<  A[i].s << '\n';
			}
		}
	}
	cout << saida << '\n';
}
