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

int T,M,m;
char c;

int main(){
	cin >> T;
	vector<string> A(T);
	for(auto &a:A){
		cin >> c >> a;
		if(c=='+')
			M++;
		else
			m++;
	}
	sort(all(A));
	for(auto &a:A) cout << a << '\n';
	cout << "Se comportaram: " << M << " | Nao se comportaram: " << m << '\n';
}
