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

int N,K;
int main(){
	cin >> N >> K;
	vi A(N);
	for(auto &a:A) cin >> a;
	sort(all(A));
	int save=1,cont=0;
	for(int i=0;i<A.size();i++){
		if(save==i)save++;
		for(int j=save;j<A.size();j++){
			save=j;
			if(A[j]>A[i] and A[j]<=(A[i]+K)){
				cont++;
				break;
			}else if(A[j]>A[i])
				break;
		}
		if(save==A.size()) break;
	}
	cout << N-cont << '\n';
}