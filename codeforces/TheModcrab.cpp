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
	ll h1,a1,c1,h2,a2;
	vector<string> A;
	cin >> h1 >> a1 >> c1 >> h2 >> a2;
	while(true){
		if(h2<=a1){
			h2-=a1;
			A.push_back("STRIKE\n");
		}else if(a2>=h1){
			A.push_back("HEAL\n");
			h1+=c1;
		}else{
			h2-=a1;
			A.push_back("STRIKE\n");
		}
		if(h2>0)
			h1-=a2;
		else
			break;
	}
	cout << A.size() << '\n';
	REP(i,A.size())
		cout << A[i];
}
