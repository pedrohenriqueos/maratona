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

int N,M,K,saida,D1[2002][2002],D2[2002][2002];
int main(){
	scanf("%d %d %d",&N,&M,&K);
	string c;
	if(K==1){
		REP(i,N){
			cin >> c;
			REP(j,M){
				if(c[j]=='.')
					saida++;	
			}
		}
	}else
	REP(i,N){
			cin >> c;
			REP(j,M)
			if(c[j]=='.'){
				if(i>0){
					D1[i][j]+=(D1[i-1][j]+1);
					if(D1[i][j]>=K)
						saida++;
				}else{
					D1[i][j]=1;
					if(K==1) saida++;
				}if(j>0){
					D2[i][j]+=(D2[i][j-1]+1);
					if(D2[i][j]>=K) saida++;
				}else{
					D2[i][j]=1;
					if(K==1) saida++;
				}
			}else
				D1[i][j]=0,D2[i][j]=0;
		}
	cout << saida << '\n';
}
