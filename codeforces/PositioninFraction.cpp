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

int A,B,C;
int main(){
	cin >> A >> B >> C;
	A*=10;
	int x=-1,cont=1,c=0;
	string s="",s2="";
	while(x!=C){
		x=A/B;
		A=(A%B)*10;
		if(x==C){
			cout << cont << '\n';
			return 0;
		}
		if(c<5)
		s+=(char)(x+'0');
		else{
			if(c<=10){
				string aux="";
				aux.assign(s2.begin(),s2.end());
				s2="";
				s2.assign(aux.begin(),aux.begin()+3);
				cout << s2 << '\n';
				s2+=(char)(x+'0');
			}else
				s2+=(char)(x+'0');
		}
		c++;
		cont++;
		if(s==s2) break;
	}
	cout << "-1\n";
}
