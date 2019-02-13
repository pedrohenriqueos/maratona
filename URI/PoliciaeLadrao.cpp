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

int T,Mat[5][5];
int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};
bool flag;
void check(int x,int y){
	//cout << x << " " << y << '\n';
	if(Mat[x][y]!=0) return ;
	Mat[x][y]=-1;
	if(x==4 and y==4){
		flag=true;
		return ;
	}
	REP(i,4){
		if((x+dx[i])>=5 or (x+dx[i])<0 or (y+dy[i])>=5 or (y+dy[i])<0 or flag)
			continue;
		check(x+dx[i],y+dy[i]);
	}
}

int main(){
	cin >> T;	
	while(T--){
		flag=false;
		REP(i,5)
			REP(j,5)
				scanf("%d",&Mat[i][j]);
		check(0,0);
		cout << ((flag)?"COPS\n":"ROBBERS\n");
	}
}
