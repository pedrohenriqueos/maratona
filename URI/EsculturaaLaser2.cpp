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
	while(cin >> N >> M){	
		if(!N and !M) break;
		vi A(M);
		int v[N+1],ult=0,saida=0;
		memset(v,0,sizeof v);
		REP(i,M){
			cin >> A[i];
			if(i==0) saida+=N-A[i];
			else if(ult<(N-A[i]))
				saida+=((N-A[i])-ult);
			ult=N-A[i];
		}
		cout << saida << '\n';
	}
}
