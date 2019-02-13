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

int T,l,r,k,dpa[1000002],out[1000002][10];

int dp(int x){
	if(dpa[x]!=-1)
		return dpa[x];
	if(x<10) return dpa[x]=x;
	int aux=x,k=1;
	while(aux>0){
		if((aux%10)>0)
			k*=(aux%10);
		aux/=10;
	}
	return dpa[k]=dp(k);
}
int main(){
	memset(dpa,-1,sizeof dpa);
	FOR(i,1,1000001){
		dpa[i]=dp(i);
		FOR(j,1,10){
			if(dpa[i]==j)
				out[i][j]=out[i-1][j]+1;
			else
				out[i][j]=out[i-1][j];
		}
	}
	scanf("%d",&T);
	while(T--){
		int saida=0;
		scanf("%d %d %d",&l,&r,&k);
		printf("%d\n",(out[r][k]-out[l][k])+(dpa[l]==k));
	}
}
