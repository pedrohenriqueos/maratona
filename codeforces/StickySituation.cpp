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
	int N;
	scanf("%d",&N);
	vll D(N);
	int i=0;
	for(auto &a:D){
		scanf("%lld",&a);
		if(i>1){
			for(int j=0;j<i;j++)
				for(int k=j+1;k<i;k++){
					long long A=D[i],B=D[j],C=D[k];
					if((abs(A-B)<C and C<(A+B)) and (abs(A-C)<B and B<(A+C)) and (abs(B-C)<A and A<(B+C))){
						printf("possible\n");
						return 0;
					}
				}
		}
		i++;
	}
	printf("impossible\n");
}



