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

int N,M,a,sum=0;
int main(){
	cin >> N >> M;
	vi S,A(N);
	bool flag;
	REP(i,N){
		cin >> A[i];
		if(i==0){
			sum=abs(A[i]);
			flag=(sum>0);
		}else if(A[i]>0 and flag){
			sum+=A[i];
		}else if(A[i]<0 and !flag){
			sum-=A[i];
		}else if(A[i]>0){
			S.pb(sum);
			flag=true;
			sum=A[i];
		}else{
			S.pb(sum);
			flag=false;
			sum=-A[i];
		}
	}
	S.pb(sum);
	REP(i,S.size())
		cout << S[i] << " ";
	cout << '\n';
	int out;
	if(A[0]>0){
		out=M-S[0];
		int aux=out;
		FOR(i,1,S.size()){
			aux+=S[i]*pow(-1,i+1);
			if(aux>M){
				out-=M-aux;
				aux=M;
			}else if(aux<0){
				out+=aux;
				aux=0;
			}
		}
		cout << out << '\n';
	}else{
		out =M;
		int aux=out;
		REP(i,S.size()){
			out+=S[i]*pow(-1,i);
			if(aux>M){
				out-=M-aux;
				aux=M;
			}else if(aux<0){
				out+=aux;
				aux=0;
			}
		}
		cout << out << '\n';
	}
	
}





