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
#define absm(a) ((a>0)?a:-a)
typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<ll,ll> lll;
typedef pair<int, ii> iii;
typedef pair<ll, lll> llll;
typedef vector< ii > vii;
typedef vector< iii > viii;

ll N,cont;
int main(){
	cin >> N;
	FOR(i,1,N+1){
		FOR(j,i+1,N+1){
			ll k=(i xor j);
			if(k<=N and k>i and k>j){
					if((absm(i-j)<k and k<(i+j)) and (absm(k-j)<i and i<(k+j)) and (absm(i-k)<j and j<(i+k))){
					//cout << i << " " << j << " " << k << '\n';
					cont++;
					}
			}
		}
	}
	cout << cont << '\n';
}
