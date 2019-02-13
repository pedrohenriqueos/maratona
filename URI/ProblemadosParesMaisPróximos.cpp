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
typedef pair<double,double> dd;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< dd > vdd;
typedef vector< iii > viii;

long double N,saida;
int main(){
	while(cin >> N){
		if(!N) break;
		saida=10000.0*10000.0;
		vdd A((int)N);
		for(auto &a:A) cin >> a.f >> a.s;
		REP(i,(int)(N-1))
			FOR(j,i+1,(int)(N)){
				long double dist=(A[i].f-A[j].f)*(A[i].f-A[j].f)+(A[i].s-A[j].s)*(A[i].s-A[j].s);
				saida = min(saida,dist);
			}
		if(saida==10000.0*10000.0)
			cout << "INFINITY\n";
		else
			cout << fixed << setprecision(4) << sqrt(saida) << '\n';
	}

}
