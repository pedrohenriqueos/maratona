int F[100002][320],A[100002],block;//[valMax][sqrt(N)]

void update(int id,int W){
	F[A[id]][id/block]--;
	F[W][id/block]++;
	A[id]=W;
}
int query(int x,int y,int W){
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
void build(){
	for(int i=1;i<=N;i++)
		F[A[i]][i/block]++;
}
