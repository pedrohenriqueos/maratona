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

int N,M;
int main(){
	cin >> N >> M;
	string str1,str2;
	cin >> str1 >> str2;
	vi S;
	REP(i,N) S.pb(i+1);
	REP(i,M-N+1){
		vi A;
		int aux=i;
		REP(j,N){
			if(str1[j]!=str2[aux] and str1[j]!='?' and str2[aux]!='?'){
				A.pb(j+1);
			}else if(str1[j]=='?' or str2[aux]=='?'){
				aux++;
				continue;
			}
			aux++;
		}
		if(S.size()>A.size())
			S=A;
	}
	cout << S.size() << '\n';
	REP(i,S.size())
		cout << S[i] << " ";
	cout << '\n';
}
