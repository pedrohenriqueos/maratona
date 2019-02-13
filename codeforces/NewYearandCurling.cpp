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

int main(){
	double N,R,a;
	cin >> N >> R;
	vdd A((int)N);
	REP(i,(int)N){
		cin >> a;
		FORI(j,i-1,0){
			if(abs(a-A[j].f)<=(2*R)){
				if(abs(a-A[j].f)==(2*R))
					A[i].f=a,A[i].s=A[j].s;
				else{
					A[i].f=a;
					double x=a-A[i].f;
					double c=x*x-(A[j].s*A[j].s)-4*R*R;
					double delta=4-4*(c);
					if(delta<0.0) break;
					if(((2+sqrt(delta))/2)>0.0)
						A[i].s=((2+sqrt(delta))/2);
					else
						A[i].s=((2-sqrt(delta))/2);
				}
			}else{
				A[i].s=3*R;
			}
		}
		if(i==0)A[j].s=R;
	cout << A[i].s << ' ';
	}
}
