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

int dx[]={0,0,1,1,1,-1,-1,-1};
int dy[]={1,-1,-1,0,1,-1,0,1};
int main(){
	int N,M;
	cin >> N >> M;
	char Mat[N][M];
	int A[N][M];
	memset(A,0,sizeof A);
	REP(i,N)
		REP(j,M){
			cin >> Mat[i][j];
			if(Mat[i][j]=='*'){
				REP(x,8)
					if((i+dx[x])>=0 and (i+dx[x])<N and (j+dy[x])>=0 and (j+dy[x])<M)
						A[i+dx[x]][j+dy[x]]++;
			}else if(Mat[i][j]=='.')
				Mat[i][j]='0';
		}
	REP(i,N)
		REP(j,M)
			if(Mat[i][j]!='*')
				if((int)(Mat[i][j]-'0')!=A[i][j]){
					cout << "NO\n";
					return 0; 
				}
	cout << "YES\n";
}
