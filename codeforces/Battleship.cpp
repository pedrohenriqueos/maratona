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
	int N,K,cont=0;
	iii m=mp(0,mp(0,0));
	cin >> N >> K;
	char Mat[N][N];
	int S[N][N];
	memset(S,0,sizeof S);
	REP(i,N)
		REP(j,N)
			cin >> Mat[i][j];
	REP(i,N){ //Linha
		cont=0;
		REP(j,N){
			if(Mat[i][j]=='.'){
				cont++;
				if(cont>=K)
					FORI(aux,j,j-K+1){
						S[i][aux]++;
						if(m.f<S[i][aux])
							m=mp(S[i][aux],mp(i,aux));
					}
			}else
				cont=0;
		}
	}
	REP(j,N){ //Coluna
		cont=0;
		REP(i,N){
			if(Mat[i][j]=='.'){
				cont++;
				if(cont>=K)
					FORI(aux,i,i-K+1){
						S[aux][j]++;
						if(m.f<S[aux][j])
							m=mp(S[aux][j],mp(aux,j));
					}
			}else
				cont=0;
		}
	}
	cout << m.s.f+1 << " " << m.s.s+1 << '\n';
}
