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

int N,M;

int main(){
	cin >> N >> M;	
	vi A;
	A.assign(N,1);
	int soma=N;
	if(M==0){
		cout << "-1 -1\n";
		return 0;
	}
	FORI(i,N-1,0){
		soma+=8;
		A[i]+=8;
		while(soma>M){
			soma--;
			A[i]--;
		}
		if(soma==M) break;
	}
	
	REP(i,N)
		cout << A[i];
	cout << " ";
	if(A[N-1]==0){
		REP(i,N)
			cout << A[i];
		return 0;
	}
	FORI(i,N-1,0)
		cout << A[i];
	cout << '\n';
}
