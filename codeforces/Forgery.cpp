#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define all(a) a.begin(),a.end()
#define db(a) cerr << #a << " = " << a << '\n';
#define _ << " , " << 

typedef pair<int,int> ii;
typedef pair<int, ii> iii;
int Esc[1002][1002];
int dx[]={0,1,-1,0,-1,1,1,-1};
int dy[]={1,0,0,-1,1,-1,1,-1};
string Mat[1002];
inline void pint(int x,int y){
	for(int i=0;i<8;i++)
		Esc[x+dx[i]][y+dy[i]]=1;
}
inline bool check(int x,int y){
	for(int i=0;i<8;i++)
		if(Mat[x+dx[i]][y+dy[i]]=='.')
			return false;
	return true;
}

int32_t main(){
	int N,M;
	scanf("%d %d",&N,&M);
	for(int i=0;i<N;i++)
		cin >> Mat[i];
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++){
			if(Mat[i][j]=='#' and (i+2)<N and (j+2)<M and check(i+1,j+1)){
				pint(i+1,j+1);
			}
		}
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			if((Mat[i][j]=='#' and Esc[i][j]==0) or (Mat[i][j]=='.' and Esc[i][j]==1))
				return puts("NO");
	puts("YES");
}














