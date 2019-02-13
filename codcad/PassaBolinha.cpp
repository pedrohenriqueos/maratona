#include<bits/stdc++.h>
using namespace std;

int N,x,y,cont;
int dy[]={-1,0,1,0};
int dx[]={0,1,0,-1};
struct Node{
	int d=0,val;
};
typedef struct Node no;
no A[150][150];
int V[150][150];
void floodfill(int x,int y){
	if(x<1 or x>N or y<1 or y>N)
		return ;
	cont++;
	V[x][y]=1;
	for(int i=0;i<4;i++){
		A[x][y].d++;
		if(A[x][y].d==4)
			A[x][y].d=0;
		if((x+dx[A[x][y].d])<1 or (x+dx[A[x][y].d])>N or (y+dy[A[x][y].d])<1 or (y+dy[A[x][y].d])>N)
			continue;
		if(A[x+dx[A[x][y].d]][y+dy[A[x][y].d]].val>=A[x][y].val and !V[x+dx[A[x][y].d]][y+dy[A[x][y].d]]){
			floodfill(x+dx[A[x][y].d],y+dy[A[x][y].d]);
		}
	}
}
int main(){
	scanf("%d",&N);
	scanf("%d %d",&x,&y);
	for(int i=1;i<=N;i++)
		for(int j=1;j<=N;j++)
			scanf("%d",&A[i][j].val);
	floodfill(x,y);
	printf("%d\n",cont);
}
