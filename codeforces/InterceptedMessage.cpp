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

ll N,M;
int main(){
	cin >> N >> M;
	vi A(N),B(M);
	for(auto &a:A) cin >> a;
	for(auto &b:B) cin >> b;
	ll s1=A[0],s2=B[0];
	ll saida=0;
	for(int i=1,j=1;i<N or j<M;){
		//cout << i << " " << j << " " << saida << '\n'; 
		if(s1==0 and s2==0){
			s1=A[i++],s2=B[j++];
		}else if(s1>s2){
			s2+=B[j++];
		}else if(s1<s2){
			s1+=A[i++];
		}else{
			saida++;
			s1=0,s2=0;
		}
	}
	if(s1==s2) saida++;
	cout << saida << '\n';
}
