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

int L,C,R1,R2;

int main(){
	while(cin >> L >> C >> R1 >> R2){
		if(!L and !C and !R1 and !R2) break;
		if((R1*2+R2*2)<=max(L,C) and max(R1,R2)*2<=min(L,C))
			cout << "S\n";
		else
			cout << "N\n";
	}
}
