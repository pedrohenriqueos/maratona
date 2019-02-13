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

int N,h,m,saida;
bool check(){
	string s=to_string(h),s2=to_string(m);
	REP(i,s.size())
		if(s[i]=='7')
			return false;
	REP(i,s2.size())
		if(s2[i]=='7')
			return false;
	return true;
}
int main(){
	cin >> N;	
	cin >> h >> m;
	while(check()){
		saida++;
		m-=N;
		if(m<0)
			m+=60,h--;
		if(h<0)
			h=23;
	}
	cout << saida << '\n';
}
