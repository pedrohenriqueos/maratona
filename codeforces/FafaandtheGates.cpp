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

int N;
int main(){
	string str;
	cin >> N;
	cin >> str;
	int cont=0;
	ii a=mp(0,0);
	ii at=a;
	REP(i,N){
		at=a;
		if(str[i]=='U') a.s++;
		else a.f++;
		if(a.f==a.s and (i<N) and ((str[i+1]=='R' and at.f==(a.f-1))or((str[i+1]=='U' and at.s==(a.s-1))))) cont++;
	}
	cout << cont << '\n';
}
