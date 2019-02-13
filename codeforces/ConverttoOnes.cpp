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
	long long N,X,Y,cont=0;
	cin >> N >> X >> Y;
	string str;
	cin >> str;
	bool flag= (str[0]=='0');
	REP(i,N){
		if(str[i]=='0' and flag){
			cont++;
			flag=false;
		}else if(str[i]=='1' and !flag){
			flag=true;
		}
	}
	cout << max(min((cont-1)*X+Y,cont*Y),0LL) << '\n';
}
