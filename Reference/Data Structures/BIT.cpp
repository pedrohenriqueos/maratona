int bit[100000],N;
int update(int x,int v){
	while(x<=N){
		bit[x]+=v;
		x+=(x&-x);
	}
}
int sum(int x){
	int s=0;
	while(x>0){
		s+=bit[x];
		x-=(x&-x);
	}
	return s;
}
