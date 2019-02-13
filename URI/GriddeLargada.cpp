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
	while(cin >> N){
		vi A(N),B(N),M(N+1);
		for(auto &a:A) cin >> a;
		REP(i,N){
			cin >> B[i];
			M[B[i]]=i;
		}
		int cont=0;
		REP(i,N)
			REP(j,N){
				if(M[A[i]]>M[A[j]] and j>i){
					cont++;
				}
			}
		cout << cont << '\n';
	}	

}
