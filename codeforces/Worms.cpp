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

int N,M,i,m;

int main(){
	cin >> N;		
	vi A(N),B(N);
	i=0;
	for(auto &a:A){
		cin >> a;
		if(i==0) B[i]=a;
		else B[i]=B[i-1]+a;
		i++;
	}
	cin >> M;
	while(M--){
		cin >> m;
		i=0;
		int j=N,meio;
		while(i<j){
			meio=(i+j)/2;
			if(B[meio]>m)
				j=meio;
			else if(B[meio]<m)
				i=meio;
			else if(B[meio]==m){
				cout << meio+1 << '\n';
				break;
			}
			if((j-i)==1){ 
				if(B[i]>=m)
					cout << i+1 << '\n';
				else
					cout << j+1 << '\n';
				break;
			}
		}
	}
}
