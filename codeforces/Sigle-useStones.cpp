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


int main(){
	int N,K;
	cin >> N >> K;
	vi A(N+1);
	vi B(N+1);
	B[0]=0;
	FOR(i,1,N){
		cin >> A[i];
		B[i]=A[i]+B[i-1];
	}
	int saida=inf;
	for(int i=K;i<B.size()-1;i++){
		if(i==K)
			saida=B[i];
		else
		saida=min(saida,B[i]-B[i-K-1]);
		//cout << B[i]-B[i-K-1] << " " << i << " " << i-K-1 << '\n';
		if(K==0) break;
	}
	cout << saida << '\n';
}
