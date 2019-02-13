memset(pai,-1,sizeof pai);
int find(int x){
	return (pai[x]==-1)?x:pai[x]=find(pai[x]);
}
void join(int x,int y){
	x=find(x);
	y=find(y);
	pai[x]=y;
}
