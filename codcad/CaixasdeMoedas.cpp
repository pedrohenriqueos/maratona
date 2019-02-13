#include<bits/stdc++.h>
using namespace std;
#define int long long
int N,M;
struct SegTreeLazy{
	int tree[400000]={0},lazy[400000]={0},arr[100000];
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

main(){
	seg S;
	scanf("%lld %lld",&N,&M);
	for(int i=0;i<N;i++)
		scanf("%lld",&S.arr[i]);
	S.build(1,0,N-1);
	while(M--){
		int a,l,r,v;
		scanf("%lld",&a);
		if(a==1){
			scanf("%lld %lld %lld",&l,&r,&v);
			S.update(1,0,N-1,l-1,r-1,v);
		}else{
			scanf("%lld %lld",&l,&r);
			printf("%lld\n",S.sum(1,l-1,r-1,0,N-1));
		}
	}
}
