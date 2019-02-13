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

ull n,k;

int main(){
	cin >> n >> k;
	ull aux=n,ant=0,i=0,t=__builtin_popcount(n),cont=1;

	while(aux>(1LL<<i)){
		if((aux&(1LL<<i))==0){
			ant |= (1LL << i);
		}
		i++;
	}
	ull saida=0;
	ant^=aux;
	bool flag=false;
	if(k>=2)
		cout << ant << '\n';
	else{
		ull a2=0;
		i=0;
		while(aux>=(1LL<<i)){
			a2|=(1LL<<i);
			i++;
		}
		ull x=__builtin_popcount(a2);
		i=0;
		while(x>k){
			a2^=(1LL<<i);
			i++;
			x--;
		}
		cout << a2 << '\n';
		
	}
}
