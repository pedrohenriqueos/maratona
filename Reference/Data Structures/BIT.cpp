const int MAXN = 1e5;
int bit[MAXN];
void update(int x,int v){
	while(x<MAXN){
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
