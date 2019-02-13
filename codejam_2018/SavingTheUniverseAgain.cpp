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

int T,N;
int main(){
	string str;
	int cas=1;
	cin >> T;
	while(T--){
		cin >> N >> str;
		ll soma=0LL;
		int k=0;
		priority_queue<int> pq;
		REP(i,str.size()){
			if(str[i]=='S'){
				soma+=(1<<k);
				if(k)
				pq.push(k);
			}else
				k++;
		}
		int cont=0;
		while(soma>N){
			if(pq.empty()) break;
			int x=pq.top();
			pq.pop();
			soma-=(1<<x);
			x--;
			soma+=(1<<x);
			if(x)
			pq.push(x);
			cont++;
		}
		cout << "Case #" << cas++ << ": ";
		if(soma>N) cout << "IMPOSSIBLE\n";
		else cout << cont << '\n';
	}
}
