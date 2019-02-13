int bit[100000][100000],N,M;
int sum(int x,int y){
	int resp=0;
	for(int i=x;i>0;i-=(i&-i))
		for(int j=y;j>0;j-=(j&-j))
			resp+=bit[i][j];
	return resp;
}
void update(int x,int y,int val){
	for(int i=x;i<N;i+=(i&-i))
		for(int j=y;j<M;j+=(j&-j))
			bit[i][j]+=val;
}
