struct SegTreeLazy{
	int tree[400000]={0},lazy[400000]={0},arr[100000];// tree e lazy 4*tam_arr
	void build(int node,int left,int right){
		if(left==right){
			tree[node]=arr[left];
			return ;
		}
		int mid=(left+right)/2;
		build(2*node,left,mid);
		build(2*node+1,mid+1,right);
		tree[node]= tree[2*node]+tree[2*node+1];
	}
	void update(int node,int left,int right,int l,int r,int value){
		if(lazy[node]){
			tree[node]=(right-left+1)*lazy[node];
			if(right!=left){
				lazy[2*node]=lazy[node];
				lazy[2*node+1]=lazy[node];
			}
			lazy[node]=0;
		}
		if(left>r or l>right)
			return ;
		if(left>=l and r>=right){
			tree[node]=(right-left+1)*value;
			if(right!=left){
				lazy[2*node]=value;
				lazy[2*node+1]=value;
			}
			return ;
		}
		int mid=(left+right)/2;
		update(2*node,left,mid,l,r,value);
		update(2*node+1,mid+1,right,l,r,value);
		tree[node]=tree[2*node]+tree[2*node+1];
	}
	int sum(int node,int l,int r,int left,int right){
		if(lazy[node]){
			tree[node]=(right-left+1)*lazy[node];
			if(right!=left){
				lazy[2*node]=lazy[node];
				lazy[2*node+1]=lazy[node];
			}
			lazy[node]=0;
		}
		if(left>r or l>right)
			return 0;
		if(left>=l and r>=right)
			return tree[node];
		int mid=(left+right)/2;
		return sum(2*node,l,r,left,mid)+sum(2*node+1,l,r,mid+1,right);
	}
};
typedef struct SegTreeLazy seg;

void pointupdate(int node,int left,int right,int idx,double value){
	if(left==right){
		tree[node]=value;
		return ;
	}
	int mid=(left+right)/2;
	if(left<=idx and idx<=mid)
		pointupdate(2*node,left,mid,idx,value);
	else
		pointupdate(2*node+1,mid+1,right,idx,value);
	tree[node]=tree[2*node]+tree[2*node+1];	
}
