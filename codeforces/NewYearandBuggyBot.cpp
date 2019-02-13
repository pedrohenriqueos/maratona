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
string MAT[52];
ii inicio,fim;
bool flag;
int main(){
	int d[24][2][4]={{{0,0,1,-1},{-1,1,0,0}}
				,{{0,0,1,-1},{1,-1,0,0}}
				,{{0,0,-1,1},{-1,1,0,0}}
				,{{0,0,-1,1},{1,-1,0,0}}
				,{{0,-1,0,1},{1,0,-1,0}}
				,{{0,-1,0,1},{-1,0,1,0}}
				,{{0,1,0,-1},{1,0,-1,0}}
				,{{0,1,0,-1},{-1,0,1,0}}
				,{{1,0,0,-1},{0,1,-1,0}}
				,{{1,0,0,-1},{0,-1,1,0}}
				,{{-1,0,0,1},{0,1,-1,0}}
				,{{-1,0,0,1},{0,-1,1,0}}
				,{{-1,0,1,0},{0,1,0,-1}}
				,{{-1,0,1,0},{0,-1,0,1}}
				,{{1,0,-1,0},{0,1,0,-1}}
				,{{1,0,-1,0},{0,-1,0,1}}
				,{{1,-1,0,0},{0,0,1,-1}}
				,{{1,-1,0,0},{0,0,-1,1}}
				,{{-1,1,0,0},{0,0,-1,1}}
				,{{-1,1,0,0},{0,0,1,-1}}
				,{{0,1,-1,0},{1,0,0,-1}}
				,{{0,1,-1,0},{-1,0,0,1}}
				,{{0,-1,1,0},{1,0,0,-1}}
				,{{0,-1,1,0},{-1,0,0,1}}};
	string str;
	int saida=0;
	cin >> N >> M;
	FOR(i,0,N){
		cin >> MAT[i];
		FOR(j,0,M){
			if(MAT[i][j]=='S')
				inicio=mp(i,j);
			else if(MAT[i][j]=='E')
				fim=mp(i,j);
		}
	}
	cin >> str;
	flag=false;
	REP(i,24){
		ii atual=inicio;
		for(auto &c:str){
			atual.f+=d[i][0][(int)(c-'0')];
			atual.s+=d[i][1][(int)(c-'0')];
			if(atual.f==fim.f and atual.s==fim.s){
				flag=true;
				break;
			}
			if((atual.f>=N or atual.f<0 or atual.s>=M or atual.s<0) or MAT[atual.f][atual.s]=='#'){
				break;
			}
		}
		if(flag) saida++;
		flag=false;
	}
	cout << saida << '\n';
}
