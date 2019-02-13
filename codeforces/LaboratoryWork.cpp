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

int N,aux;
int main(){
	cin >> N;
	aux=N;
	vi A(N);
	int K[3];
	K[0]=K[1]=K[2]=1e7;
	for(auto &a:A){
		cin >> a;
		REP(x,3){
			if(K[x]==1e7){
				K[x]=a;
				break;
			}
			else if(K[x]==a) break;
		}
	}
	if(K[2]==1e7){
		cout << N << '\n';
		for(auto &a:A)
			cout << a << " ";
		cout << '\n';
		return 0;
	}
	sort(all(A));
	int j=N-1;
	REP(i,(N/2)+1){
		if(A[i]==(A[j]-2)){
			A[i]++;
			A[j]--;
			aux-=2;
		}
		j--;
	}
	cout << aux << '\n';
	REP(i,N)
		cout << A[i] << " ";
	cout << '\n';
}
