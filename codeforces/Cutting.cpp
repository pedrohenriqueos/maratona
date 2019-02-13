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

int N,B,cont,P[102],I[102];
int main(){
	cin >> N >> B;
	vi A(N);
	int x=0;
	priority_queue<pair<int,int>,vector< pair<int,int> >,greater< pair<int,int> > > pq;
	for(auto &a:A){
		cin >> a;
		if(a%2==1)
			I[x]=I[x-1]+1,P[x]=P[x-1];
		else
			P[x]=P[x-1]+1,I[x]=I[x-1];
		x++;
	}
	FOR(i,1,N)
			pq.push({abs(A[i]-A[i-1]),i-1});
	while(!pq.empty()){
		pair<int,int> k= pq.top();
		pq.pop();
		if((B-k.first)>=0){
			if(P[k.second]==I[k.second] and (P[x]-P[k.second])==(I[x]-I[k.second]))
				B-=k.first,cont++;
		}
	}
	cout << cont << '\n';
}
