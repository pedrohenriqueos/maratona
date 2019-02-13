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
	map<string,string> Map;
	string str1,str2;
	cin >> N >> M;
	while(N--){
		cin >> str1 >> str2;
		Map[str2]=str1;
	}
	while(M--){
		cin >> str1 >> str2;
		string x="";
		REP(i,str2.size()-1)
			x+=str2[i];
		for(map<string,string>::iterator it=Map.begin();it!=Map.end();it++)
			if(x==it->f){
				cout << str1 << " " << str2 << " #" << it->s << '\n';
				break;
			}
	}
}
