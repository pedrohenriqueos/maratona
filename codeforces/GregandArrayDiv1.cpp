#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second

struct SegTreeLazy{
	int tree[400000]={0},lazy[400000]={0},arr[100000]={0};// tree e lazy 4*tam_arr
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
	void build2(int node,int left,int right){
		if(lazy[node]){
			tree[node]=(right-left+1)*lazy[node];
			if(right!=left){
				lazy[2*node]=lazy[node];
				lazy[2*node+1]=lazy[node];
			}
			lazy[node]=0;
		}
		if(left==right){
			return ;
		}
		int mid=(left+right)/2;
		build(2*node,left,mid);
		build(2*node+1,mid+1,right);
		//tree[node]= tree[2*node]+tree[2*node+1];
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
int N,M,K;
seg T;
int main(){
	scanf("%d %d %d",&N,&M,&K);
	vector< pair<int, pair<int,int> > > S(M);
	for(int i=1;i<=N;i++){
		scanf("%d",&T.arr[i]);
	}
	T.build(1,1,N);
	for(auto &k:S)
		scanf("%d %d %d",&k.f,&k.s.f,&k.s.s);
	for(int i=0;i<K;i++){
		int l,r;
		scanf("%d %d",&l,&r);
		for(int x=l;x<=r;x++)
			T.update(1,1,N,S[x].f,S[x].s.f,S[x].s.s);
	}
	T.build2(1,1,N);
	for(int i=1;i<=N;i++)
		printf("%d ",T.arr[i]);
	printf("\n");
}
