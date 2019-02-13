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

int main(){
	int k,n,s,p;
	cin >> k >> n >> s >> p;
	int resto=0,saida=0;
	REP(i,k){
		int aux=n;
		int x=resto;
		while(aux>0){
			if(x==0){
				saida++;
				x=p;
			}
			x--;
			aux-=s;
		}
		resto=x;
	}
	cout << saida << '\n';
}
