struct SegIterative{
	int tree[200000]={0};// tree e lazy 2*tam_arr
	int n=1e5;//size Seg
	void build(){
		for(int i=n-1;i>0;i--) tree[i] = tree[i<<1] + tree[i<<1|1];
	}
	void update(int p,int val){
		for(tree[p+=n]=val;p>1;p>>=1) tree[p>>1] = tree[p]+tree[p^1];
	}
	int query(int l,int r){ // [l,r)
		int resp=0;
		for(l+=n,r+=n;l<r;l>>=1,r>>=1){
			if(l&1) resp+=tree[l++];
			if(r&1) resp+=tree[--r];
		}
		return resp;
	}
};
// main input
for(int i=0;i<n;i++)
	cin >> SegIterative.tree[i+n];
SegIterative.build();

