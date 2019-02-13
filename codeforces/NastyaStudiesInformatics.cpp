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

int L,R,X,Y;
set< pair<int,int> > S;
vll divi;

void divisores(int V){
	for(int i=1;i<=sqrt(V);i++)
		if(!(V%i)){
			divi.pb(i);
			divi.pb(V/i);
		}
}
int main(){
	cin >> L >> R >> X >> Y;
	divisores(Y);
	for(int i=0;i<divi.size();i++)
		for(int j=0;j<divi.size();j++)
			if(divi[i]>=L and divi[i]<=R and divi[j]>=L and divi[j]<=R and __gcd(divi[i],divi[j])==X and ((divi[i]*divi[j])/__gcd(divi[i],divi[j]))==Y)
				S.insert({divi[i],divi[j]});
	cout << S.size() << '\n';
}
