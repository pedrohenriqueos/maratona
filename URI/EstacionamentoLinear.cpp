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

int N,K,x,y;

int main(){
	while(cin >> N >> K){
		if(!N and !K) break;
	vector< pair<int,int> > A;
	bool flag=false;
	while(N--){
		cin >> x >> y;
		if(A.size()==0){
			A.pb(mp(x,y));
		}else{
			while(A.size()>0 and A[A.size()-1].s<=x)
				A.erase(A.end()-1);
			if(A.size()>0 and A[A.size()-1].s<y and !flag){
				cout << "Nao\n";
				flag=true;
			}
			A.pb(mp(x,y));
			if(A.size()>K and !flag){
				cout << "Nao\n";
				flag=true;
			}
		}
	}
	if(!flag)
		cout << "Sim\n";
	}
}
