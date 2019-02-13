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

int N;
bool flag;
bool check(vi A){
	REP(i,A.size()-1)
		if(A[i]>A[i+1])
			return false;
	return true;
}
bool check2(vi A){
	REP(i,A.size()-1)
		if(abs(A[i]-A[i+1])>1)
			return true;
	return false;
}
int main(){
	flag=true;
	cin >> N;
	vi A(N);
	int k=0;
	for(auto &a:A) cin >> a;
	while(!check(A)){
		if(check2(A)){
			flag=false;
			break;
		}
		int m=0;
		vector<int>::iterator t;
		for(vector<int>::iterator it=A.begin();it!=(A.end()-k);it++){
			if((*it)>m){
				m=*it;
				t=it;
			}
		}
		if(m==0) break;
		A.erase(t);
	}
	cout << ((check(A) and !check2(A))?"YES\n":"NO\n");
}
