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

int main(){
	string str;	
	cin >> str;
	int contm=0,N=0,v=0;
	vi S(102);
	vector<char> A;
	bool flag=false;
	bool flagn=false;
	for(auto c:str){
		if(flagn){
			if(c>='0' and c<='9')
				v=v*10+(int)(c-'0');
		}
		else if(c=='-'){
			contm++;
			A.pb(c);
		}
		else if(c=='?'){
			N++;
		}else if(c=='+'){
			flag=false;
			A.pb(c);
		}else if(c=='='){
			flagn=true;
		}
	}
	cout << v << '\n';
	int som=0;
	int num=(v+contm)/N;
	S[0]=num;
	som+=S[0];
	REP(i,A.size()){
		if(A[i]=='+')
			S[i+1]=num;
		else
			S[i+1]=1;
		som+=S[i+1];
	}
	S[0]+=(v-som);
	REP(i,N)
		if(S[i]==0 or S[i]>v){
			cout << "Impossible\n";
			return 0;
		}
	cout << "Possible\n";
	REP(i,N){
	cout << S[i] << " ";
	if(i!=N-1)
		cout << A[i] << " ";
	}
	cout << "= " << v << '\n';
}
