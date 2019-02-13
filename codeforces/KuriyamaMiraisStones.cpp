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
typedef vector< ll > vll;
typedef vector< iii > viii;

ll N,M,l,r,t;

int main(){
	cin >> N;
	vll A(N),B;
	for(auto &a:A){ 
		cin >> a;
		B.pb(a);
	}
	sort(all(B));
	FOR(i,1,N)
		A[i]+=A[i-1],B[i]+=B[i-1];
	//REP(i,N)
		//cout << A[i] << " " << B[i] << '\n';
	cin >> M;
	while(M--){
		cin >> t >> l >> r;
		if(t==1){ 
			cout << A[r-1]-((l-2>=0)?A[l-2]:0) << '\n';
		}else{ cout << B[r-1]-((l-2>=0)?B[l-2]:0) << '\n'; 
		}	
	}
}
