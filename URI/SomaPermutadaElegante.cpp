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

int T,N,caso;

int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		vi A;
		A.assign(N,0);
		for(auto &a:A) scanf("%d",&a);
		sort(all(A));
		int saida=0;
		int i,j=N-1,x=0;
		bool flag=false;
		i=(N%2==0)?((N/2)-1):(N/2);
		while(x<(N-1)){
			//cout << A[j] << " " << A[i] << '\n';
			saida+=abs(A[j]-A[i]);x++;
			if(x==N-1) break;
			if(i>0 and abs(A[j]-A[i-1])>=abs(A[j-1]-A[i])){
				flag=true;
				i--;
			}else{
				flag=false;
				j--;
			}
			//cout << A[j] << " " << A[i] << '\n';
			saida+=abs(A[j]-A[i]);x++;
			if(flag) j--; else i--;
		}
		printf("Case %d: %d\n",++caso,saida);
	}	

}
