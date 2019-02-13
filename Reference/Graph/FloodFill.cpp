auto MAT[N][M];
int dr[]={0,0,1,-1};
int dc[]={1,-1,0,0};
int floodfill(int r,int c,auto k,auto p){
	if(r>=N or r<0 or c>=M or c<0)
		return 0;
	if(MAT[r][c]!=p)
		return 0;
	int ans=1;
	for(int i=0;i<4;i++)
		ans+=floodfill(r+dr[di],c+dc[di],k,p);
	return ans;
}
