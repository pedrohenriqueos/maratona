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
	string str;
	bool flag=false;
	REP(i,10){
		cout << i << '\n';
		fflush(stdout);
		getline(cin,str);
		fflush(stdin);
		if(str=="no"){
			continue;
		}else if(str=="great" or str=="don't think so" or str=="don't touch me" or str=="not bad" or str=="cool"){
			flag=true;
			cout << "normal\n";
			fflush(stdout);
			break;
		}else if(str=="no way" or str=="are you serious" or str=="don't even" or str=="go die in a hole" or str=="worse" or str=="terrible"){
			flag=true;
			cout << "grumpy\n";
			fflush(stdout);
			break;
		}
	}
}
