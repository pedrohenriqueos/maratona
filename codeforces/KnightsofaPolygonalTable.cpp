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

int main(){
	int N,K;
	cin >> N >> K;
	vector< pair<long long,long long> > D(N);
	long long out[N];
	map<long long,int> Map;
	for(int i=0;i<N;i++)
		cin >> D[i].f,Map[D[i].f]=i;
	for(int i=0;i<N;i++)
		cin >> D[i].s;
	sort(all(D));
	vector<long long> sub;
	long long sum=0;
	out[Map[D[0].f]]=D[0].s;
	for(int i=1;i<N;i++){
		if(sub.size()<K)
			sub.pb(D[i-1].s),sum+=D[i-1].s;
		else if(K){
			sort(all(sub));
			if(sub[0]<D[i-1].s){
				sum-=sub[0];
				sub[0]=D[i-1].s;
				sum+=D[i-1].s;
			}
		}
		out[Map[D[i].f]]=sum+D[i].s;
	}
	for(int i=0;i<N;i++)
		cout << out[i] << " ";
	cout << '\n';
}





