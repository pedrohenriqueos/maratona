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

ll N,M,at,a,saida;
int main(){
	cin >> N >> M;
	at=1;
	REP(i,M){
		cin >> a;
		if(a==at) continue;
		else if(a>at) saida+=(a-at),at=a;
		else saida+=((N-at)+a),at=a;
	}
	cout << saida << '\n';
}
