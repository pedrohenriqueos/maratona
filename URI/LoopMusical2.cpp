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

int N;

int main(){
	while(cin >> N and N){	
		vi A(N);
		int saida=0;
		for(auto &a:A) cin >> a;
		bool s;
		if((A[N-1]>A[0] and A[0]<A[1]) or (A[N-1]<A[0] and A[0]>A[1])) saida++;
		FOR(i,1,N-1){
			if((A[i]>A[i-1] and A[i]>A[i+1]) or (A[i]<A[i-1] and A[i]<A[i+1])) saida++;
		}
		if((A[0]>A[N-1] and A[N-1]<A[N-2]) or (A[0]<A[N-1] and A[N-1]>A[N-2])) saida++;
		cout << saida << '\n';
	}
}
