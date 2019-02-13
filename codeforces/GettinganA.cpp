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

int aprox(double sum,double N){
	double k=(sum/N);
	double l=k-floor(k);
	return floor(k)+(l>=0.5);
}
int main(){
	double N,out=0;
	double sum=0;
	cin >> N;
	vector<int> A(N);
	for(int &a:A) cin >> a,sum+=a;
	while(aprox(sum,N)<5){
		sort(all(A));
		int parc=0;
		for(int i=0;i<N;i++){
			if(A[i]!=5){
				parc=(5-A[i]);
				A[i]=5;
				break;
			}
		}
		sum+=parc;
		out++;
	}
	cout << out << '\n';
}


















