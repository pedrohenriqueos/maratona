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

int N,M;

int main(){
	cin >> N >> M;
	map<string,int> Map;
	string s;
	ull saida=0;
	while(N--){
		string str; int a;
		cin >> str >> a;
		Map.insert(mp(str,a));
	}
	while(M--){
		saida=0;
		while(getline(cin,s)){
			if(s==".") break;
			string aux="";
			for(char c:s){
				if(c>='a' and c<='z')
					aux+=c;
				else{
					saida+=Map[aux];
					aux="";
				}
			}
			saida+=Map[aux];
		}
		cout << saida << '\n';
	}
}
