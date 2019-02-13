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
bool check(vi A){
	int s=0;
	REP(i,A.size())
		s+=(1<<(A[i]));
	if(s==M)
		return true;
	return false;
}
int main(){
	cin >> N >> M;	
	vi A(M);
	A.assign(M,-1);
	if(((1<<A[0])*M)==M){
		cout << "Yes\n";
		REP(i,A.size())
			cout << A[i] << " ";
		cout << '\n';
	}else{
		int i=A[0]+1;
		while(((1<<i)*M)<N){
			i++;
		}
		
	}
}
