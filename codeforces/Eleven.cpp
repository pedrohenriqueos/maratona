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

int N,v[1000002];

int rec(int A){
	
	if(A==1 or A==2){
		v[A]=1;
		return A;
	}
	int x=rec(A-2)+rec(A-1);
	return v[x]=x;
}

int main(){
	cin >> N;
	rec(20);
	FOR(i,1,N+1)
		cout << ((v[i])?"O":"o");
	cout << '\n';
}
