#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
//#define pi 3.141592653589793
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define REP(i,n) FOR(i,0,n)

typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ll > vll;
typedef vector< ii > vii;
typedef vector< iii > viii;

int N,M,l,r;
int main(){
	cin >> N >> M;
	string str;
	char c1,c2;
	cin >> str;
	while(M--){
		cin >> l >> r >> c1 >> c2;
		FOR(i,l-1,r){
			if(str[i]==c1)
				str[i]=c2;
		}
	}
	cout << str << '\n';
}	
