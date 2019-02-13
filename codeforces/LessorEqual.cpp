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
int N,M;
int main(){
	cin >> N >> M;	
	vi A(N),V;
	map<int,int> Map;
	pair< map<int,int>::iterator,bool > r;
	for(auto &a:A){
		cin >> a;
		r=Map.insert(mp(a,1));
		if(!r.s){
			Map[a]++;
		}else{
			V.pb(a);
		}
	}
	sort(all(V));
	if(M==0){
		if(V[0]>1)
			cout << "1\n";
		else
			cout << "-1\n";
		return 0;
	}
	int s=0;
	REP(i,V.size()){
		s+=Map[V[i]];
		if(s>M){
			cout << "-1\n";
			return 0;
		}else if(s==M){
			cout << V[i] << '\n';
			return 0;
		}
	}
}



