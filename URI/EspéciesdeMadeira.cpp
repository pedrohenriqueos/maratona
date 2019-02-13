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

int T;
string str;
int main(){
	cin >> T;
	int s=0;
	cin.ignore();
	map<string,int> A;
	vector< pair<string,int> > B;
	int cont=0;
	pair< map<string,int>::iterator,bool> r;
	while(getline(cin,str)){
		if(str==""){
			if(s==0){
				s++;
				continue;
			}
			if(s!=1) cout << '\n';
			for(map<string,int>::iterator it=A.begin();it!=A.end();it++){
				B.pb(mp(it->f,it->s));
			}
			sort(all(B));
			REP(i,B.size()){
				cout << B[i].f << " ";
				cout << fixed << setprecision(4) << (double)((100.0*(double)B[i].s)/cont) << '\n';
			}
			B.clear();A.clear();s++;cont=0;
		}else{
			cont++;
			r= A.insert(mp(str,1));
			if(!r.s) A[str]++;
		}
	}
	if(s!=1) cout << '\n';
	for(map<string,int>::iterator it=A.begin();it!=A.end();it++)
		B.pb(mp(it->f,it->s));
	sort(all(B));
	REP(i,B.size()){
		cout << B[i].f << " ";
		cout << fixed << setprecision(4) << (double)((100.0*(double)B[i].s)/cont) << '\n';
	}
		

}
