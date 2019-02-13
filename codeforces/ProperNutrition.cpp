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

int N,A,B;

int main(){
	cin >> N >> A >> B;
	if(N%A==0){
		cout << "YES\n";
		cout << N/A << " 0\n";
		return 0;
	}else if(N%B==0){
		cout << "YES\n";
		cout << "0 " << N/B << '\n';
		return 0;
	}
	if(A==1){
		cout << "YES\n";
		cout << N%B << " " << N/B << '\n';
		return 0;
	}else if(B==1){
		cout << "YES\n";
		cout << N/A << " " << N%A << '\n';
		return 0;
	}
	int j=2;
	while(A*j<=N){
		if(A*j==N){
			cout << "YES\n";
			cout << j << " 0" << '\n';
			return 0;
		}
		j++;
	}
	j=2;
	while(B*j<=N){
		if(B*j==N){
			cout << "YES\n";
			cout << "0 " << j << '\n';
			return 0;
		}
		j++;
	}

	FOR(i,1,10000001){
		if((N-A*i)<0) break;
		if((N-A*i)%B==0){
			cout << "YES\n";
			cout << i << " " << (int)((N-(A*i))/B) << '\n';
			return 0;
		}
	}
	cout << "NO\n";
}
