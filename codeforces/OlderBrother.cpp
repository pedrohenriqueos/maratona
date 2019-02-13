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

set<ll> fat(ll q){
	set<ll> S;
	for(ll i=2;i*i<=q;i++){
		while(q%i==0){
			S.insert(i);
			q/=i;
		}
	}
	if(q>1) S.insert(q);
	return S;
}
int main(){
	ll q;
	set<ll> S;
	cin >> q;
	S=fat(q);
	if(S.size()==1 and S.find(1)==S.end()){
		cout << "yes\n";
	}else
		cout << "no\n";
}
