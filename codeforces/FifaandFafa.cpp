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

int R;
pair<double,double> p1,p2;

double dist(pair<double,double> a1,pair<double,double> a2){
	double x=abs(a1.f-a2.f),y=abs(a1.s-a2.s);
	return sqrt(x*x+y*y);
}
int main(){
	cin >> R >> p1.f >> p1.s >> p2.f >> p2.s;
	double d= dist(p1,p2);
	d+=R;
	double r=d/2.0;
	double m=abs((p1.s-p2.s)/(p1.f-p2.f));
	
	
	cout << fixed << setprecision(12) << x1 << " " << y1 << " " << r << '\n';
}
