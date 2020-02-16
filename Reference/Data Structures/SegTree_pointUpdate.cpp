//The Child and Sequence - 438/D - round #250
#include<bits/stdc++.h>
using namespace std;

#define int long long

const int MAXN = 100001;
int tree[4*MAXN],mx[4*MAXN],arr[MAXN],n;

void build(int node,int left,int right){
	if(left==right){
		mx[node] = left;
		tree[node] = arr[left];
		return ;
	}
	int mid = (left+right)>>1;
	build(node << 1,left,mid);
	build(node << 1|1,mid+1,right);
	tree[node] = tree[node<<1] + tree[node<<1|1];
	mx[node] = ((arr[mx[node<<1]]>arr[mx[node<<1|1]])?mx[node<<1]:mx[node<<1|1]);
}

void update(int node,int left,int right,int id,int x){
	if(left==right){
		tree[node] = arr[left] = x;
		return ;
	}
	int mid = (left+right)>>1;
	if(mid>=id)
		update(node << 1,left,mid,id,x);
	else
		update(node << 1|1,mid+1,right,id,x);
	tree[node] = tree[node<<1] + tree[node<<1|1];
	mx[node] = ((arr[mx[node<<1]]>arr[mx[node<<1|1]])?mx[node<<1]:mx[node<<1|1]);
}

int querymx(int node,int left,int right,int l,int r){
	if(left>r or right <l)
		return n; //arr[n] == -inf
	if(left>=l and right<=r)
		return mx[node];
	int mid = (left+right)>>1;
	int mxl = querymx(node<<1,left,mid,l,r);
	int mxr = querymx(node<<1|1,mid+1,right,l,r);
	return ((arr[mxl]>arr[mxr])?mxl:mxr);
}

int querysum(int node,int left,int right,int l,int r){
	if(left > r or right < l)
		return 0;
	if(left>=l and right<=r)
		return tree[node];
	int mid = (left+right)>>1;
	return querysum(node<<1,left,mid,l,r) + querysum(node<<1|1,mid+1,right,l,r);
}

int32_t main(){
	int m,t,l,r,x;
	scanf("%lld %lld",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	mx[n] = 0,arr[n] = 0;
	build(1,0,n-1);
	while(m--){
		scanf("%lld",&t);
		if(t==1){
			scanf("%lld %lld",&l,&r);
			l--,r--;
			printf("%lld\n",querysum(1,0,n-1,l,r));
		}else if(t==2){
			scanf("%lld %lld %lld",&l,&r,&x);
			l--,r--;
			int v = querymx(1,0,n-1,l,r);
			while(arr[v]>=x){
				update(1,0,n-1,v,arr[v]%x);
				v = querymx(1,0,n-1,l,r);
			}
		}else{
			scanf("%lld %lld",&l,&x);
			l--;
			update(1,0,n-1,l,x);
		}
	}
}



