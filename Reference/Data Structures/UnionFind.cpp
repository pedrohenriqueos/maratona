int find(int x){
	return (pai[x]==x)?x:pai[x]=find(pai[x]);
}
void join(int x,int y){
	x=find(x);
	y=find(y);
	if(x==y) return ;
	pai[x]=y;
}
