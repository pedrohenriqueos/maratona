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

int l,r,a;
int main(){
	cin >> l >> r >> a;
	int s=0;
	if(l==r){
		cout << l+r+((a/2)*2) << '\n';
		return 0;
	}
	int k=min(l,r);
	s+=2*k;
	if(k==l){
		int m=min(a,r-k);
		a-=m;
		s+=2*m;
	}else{
		int m=min(a,l-k);
		a-=m;
		s+=2*m;
	}
	cout << s+((a/2)*2) << '\n';
}
