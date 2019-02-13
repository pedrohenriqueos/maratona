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

int main(){
	string s1;
	cin >> s1;
	map<char,string> Map;
	Map['0']="O-|-OOOO\n";
	Map['1']="O-|O-OOO\n";
	Map['2']="O-|OO-OO\n";
	Map['3']="O-|OOO-O\n";
	Map['4']="O-|OOOO-\n";
	Map['5']="-O|-OOOO\n";
	Map['6']="-O|O-OOO\n";
	Map['7']="-O|OO-OO\n";
	Map['8']="-O|OOO-O\n";
	Map['9']="-O|OOOO-\n";
	FORI(i,s1.size()-1,0)
		cout << Map[s1[i]];
	
}
