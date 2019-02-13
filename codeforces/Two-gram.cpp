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
int N;
int main(){
	cin >> N;
	string str;
	cin >> str;
	map<string,int> Map;
	pair< map<string,int>::iterator,bool > r;
	FOR(i,1,str.size()){
		string s1= "";
		s1+=str[i-1];
		s1+=str[i];
		r=Map.insert(mp(s1,1));
		if(!r.s)
			Map[s1]++;
	}
	pair<string,int> s=mp("a",0);
	for(map<string,int>::iterator it = Map.begin();it!=Map.end();it++){
		if(it->s>s.s)
			s=mp(it->f,it->s);
	}
	cout << s.f << '\n';
}
































