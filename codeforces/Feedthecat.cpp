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
#define min(a,b) ((a>b)?b:a)
typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

double hh,mm,C,saida1=0,saida2=0;
double H,D,N,hora,minu;
int main(){
	cin >> hh >> mm;
	cin >> H >> D >> C >> N;
	hora=hh,minu=mm;
	if(hh>=20){
		cout << fixed << setprecision(5) << ceil((H/N))*(C*0.8) << '\n';
		return 0;
	}
	double tempo=0;
	if(minu!=0){
		tempo+=(60-minu);
		hora++;
	}
	tempo+=(60*(20-hora));
	double F=H+D*tempo;
	double a=(ceil((F/N))*(C*0.8)),b=(ceil((H/N))*(C));
	cout << fixed << setprecision(5) << min(a,b) << '\n';
}
