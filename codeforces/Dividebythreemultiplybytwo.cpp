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
typedef pair<int,ll> pll;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;
typedef vector< pll > vpll;

int func(ll p){
	int val=0;
	while(p%3==0){
		val++;
		p/=3;
	}
	return val;
}
int main(){
	int N;
	ll p;
	cin >> N;
	vpll A(N);
	for(auto &a:A){
		cin >> p;
		a.f=-func(p);a.s=p;
	}
	sort(all(A));
	for(auto &a:A)
		cout << a.s << " ";
	cout << '\n';
}
