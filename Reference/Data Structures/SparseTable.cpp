int table[MAXN][MAXN],arr[MAXN];
void buildSparseTable(int N){
	for(int i=0;i<N;i++)
		table[i][0]=arr[i];
	for(int j=1;(1LL<<j)<=N;j++)
		for(int i=0;(i+(1LL<<j))<=N;i++)
			table[i][j]=min(table[i][j-1],table[i+(1LL<<(j-1))][j-1]);	
}

int query(int l,int r){
	int j=log2(r-l+1);
	return min(table[l][j] , table[r-(1LL<<j)+1][j]);
}
