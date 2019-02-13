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

vi p,val,points;
int N,M,Q,A,B,pf;

int findSet(int i){
	return (p[i]==i)? i : p[i]=findSet(p[i]);
}
bool isSameSet(int i,int j){
	return findSet(i)==findSet(j);
}
void unionSet(int i,int j){
	if(!isSameSet(i,j)){
		int x = findSet(i),y=findSet(j);
		if(val[x]>val[y]){
			if(y==pf)
				pf=x;
			p[y]=x,points[x]+=points[y];
			val[x]++;
		}else{
			if(x==pf)
				pf=y;
			p[x]=y,points[y]+=points[x];
			val[y]++;
		}
	}
}
int main(){
	while(scanf("%d %d",&N,&M)){
		if(N==0 and M==0) break;
		int saida=0;
		pf=1,N++;
		points.assign(N,0);
		val.assign(N,0);
		p.assign(N,0);
		FOR(i,1,N) scanf("%d",&points[i]),p[i]=i;
		while(M--){
			scanf("%d %d %d",&Q,&A,&B);
			if(Q==1)
				unionSet(A,B);
			else{
				A=findSet(A);
				B=findSet(B);
				saida+=((points[A]>points[B] and A==pf)?1:(points[B]>points[A] and B==pf)?1:0);
			}
		}
			printf("%d\n",saida);
	}
}
