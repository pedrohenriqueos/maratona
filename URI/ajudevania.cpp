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

int N,M,caso;
int memo[1002][52];
vii A;

int resp(int livro,int peso){
	if(memo[livro][peso]!=-1) return memo[livro][peso];
	if(livro>=N or peso<0) return memo[livro][peso]=0;
	int nao_coloca=resp(livro+1, peso);
	if(A[livro].f<=peso){
		int coloca=A[livro].s+resp(livro+1, peso-A[livro].f);
		return memo[livro][peso]=max(coloca, nao_coloca);
	}
	return memo[livro][peso]=nao_coloca;
}


int main(){
	while(scanf("%d %d",&N,&M)){
		if(N==0 and M==0) break;
		A.clear();
		A.assign(N,mp(0,0));	
		memset(memo,-1,sizeof memo);
		for(auto &a:A) scanf("%d %d",&a.f,&a.s);
		//sort(all(A),ordem);
		//for(auto &a:A) printf("%d %d\n",a.f,a.s);
		int saida = resp(0,M);
		printf("Caso %d: %d\n",++caso,saida);
	}

}
