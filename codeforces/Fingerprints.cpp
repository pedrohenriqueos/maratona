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

int V[12];
int main(){
	int N,M;
	cin >> N >> M;
	vi A(N);
	for(auto &a:A) cin >> a;
	REP(i,M){
		int b;
		cin >> b;
		V[b]++;
	}
	REP(i,N)
		if(V[A[i]])
			cout << A[i] << " "; 
	cout << '\n';
}
