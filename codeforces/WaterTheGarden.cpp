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

int T,N,M,c;
int main(){
	cin >> T;
	while(T--){
		cin >> N >> M;
		vi A;
		A.assign(N,0);
		while(M--){
			cin >> c;
			A[c]++;
		}
		bool ok=false;
		int out=1;
		while(!ok){
			ok=true;
			REP(i,N){
				bool s=true;
				if(A[i] and (i>0 and !A[i-1])){
					ok=s=false;
					A[i-1]=1;
				}
				if(A[i] and (i<(N-1) and !A[i+1])){
					ok=s=false;
					A[i+1]=1;
				}
				if(!s) out++;
			}
			if(ok){
				cout << out << '\n';
				break;
			}
		}
	}
}
