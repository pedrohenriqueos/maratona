#include<bits/stdc++.h>
using namespace std;

int N,Q,block,A[100002];
int F[100002][320];

void update(int id,int W){
	F[A[id]][id/block]--;
	F[W][id/block]++;
	A[id]=W;
}
int querry(int x,int y,int W){
	int x1=x/block,y1=y/block,out=0;
	for(int i=x1+1;i<y1;i++)
		out+=F[W][i];
	if(x1==y1){
		for(int i=x;i<=y;i++)
			if(A[i]==W)
				out++;
		return out;
	}
	for(int i=x;(i/block)==x1;i++)
		if(A[i]==W)
			out++;
	for(int i=y;(i/block)==y1;i--)
		if(A[i]==W)
			out++;
	return out;
}
int main(){
	scanf("%d %d",&N,&Q);
	block=sqrt(N);
	for(int i=1;i<=N;i++){
		scanf("%d",&A[i]);
		F[A[i]][i/block]++;
	}
	while(Q--){
		int a,x,y,w;
		scanf("%d",&a);
		if(a==1){
			scanf("%d %d",&x,&w);
			update(x,w);
		}else{
			scanf("%d %d %d",&x,&y,&w);
			int f=querry(x,y,w);
			printf("%d\n",(y-x+1)-f);
		}
	}

}
