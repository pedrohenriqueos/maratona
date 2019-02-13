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
	int N,x=1,j=0;
	cin >> N;
	vii A(N);
	stack<int> q;
	for(auto &a:A) cin >> a.f,a.s=x++;
	sort(all(A));
	string str;
	cin >> str;
	REP(i,str.size()){
		if(str[i]=='0'){
			cout << A[j].s << " ";
			q.push(A[j].s);
			j++; 
		}else{
			int k=q.top();
			q.pop();
			cout << k << " ";
		}
	}
}
