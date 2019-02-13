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
ii lis(vi &v){
	int c=0,cont=0,ini=0;
	ii saida=mp(-1,-1);
	REP(i,v.size()){
		if(v[i]>=c){
			c=v[i];
			cont++;
		}else if(cont>(saida.s-saida.f)){
			saida=mp(ini,i);
			cont=1;
			c=1;
			ini=i;
		}
		if(i==v.size()-1)
			if(cont>(saida.s-saida.f))
			saida=mp(ini,i+1);
	}
	return saida;
}
int main(){
	cin >> N;
	vi A(N),B;
	for(auto &a:A) cin >> a,B.pb(a);
	reverse(all(B));
	ii s=lis(B);
	reverse(A.begin()+(N-s.s),A.begin()+(N-s.f));
	int c=0,cont=0;
	int out=0;
	REP(i,A.size()){
		if(A[i]>=c){
			c=A[i];
			cont++;
		}else if(cont>out){
			out=cont;
			cont=1;
			c=1;
		}else{
			cont=1;
			c=1;
		}
	}
	cout << max(out,cont) << '\n';
}
