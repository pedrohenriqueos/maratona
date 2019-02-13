#include<bits/stdc++.h>
using namespace std;


struct SegTreeLazy{
	int tree[400000][9]={0},ret[9],lazy[400000][9]={0},arr[100000][9],L,R;
	void build(int node,int left,int right){
		if(left==right){
			for(int i=0;i<9;i++)
				tree[node][i]=arr[left][i];
			return ;
		}
		int mid=(left+right)/2;
		build(2*node,left,mid);
		build(2*node+1,mid+1,right);
		for(int i=0;i<9;i++)
			tree[node][i]= tree[2*node][i]+tree[2*node+1][i];
	}
	void update(int node,int left,int right,int l,int r,vector<int> &value){
		for(int i=0;i<9;i++)
			if(lazy[node][i]){
				tree[node][i]+=(right-left+1)*lazy[node][i];
				if(right!=left){
					lazy[2*node][i]=lazy[node][i];
					lazy[2*node+1][i]=lazy[node][i];
				}
				lazy[node][i]=0;
			}
		if(left>r or l>right)
			return ;
		if(left>=l and r>=right){
			if(left==right){
				for(int i=0;i<9;i++){
					if(tree[node][i]){
						i+value[]
					}
				}
			}
			for(int i=0;i<9;i++){
				tree[node][i]+=(right-left+1)*value[i];
				if(right!=left){
					lazy[2*node][i]=value[i];
					lazy[2*node+1][i]=value[i];
				}
			}
			return ;
		}
		int mid=(left+right)/2;
		update(2*node,left,mid,l,r,value);
		update(2*node+1,mid+1,right,l,r,value);
		for(int i=0;i<9;i++)
			tree[node][i]= tree[2*node][i]+tree[2*node+1][i];
	}
	void sum(int node,int l,int r,int left,int right){
		for(int i=0;i<9;i++)
			if(lazy[node][i]){
				tree[node][i]=(right-left+1)*lazy[node][i];
				if(right!=left){
					lazy[2*node][i]=lazy[node][i];
					lazy[2*node+1][i]=lazy[node][i];
				}
				lazy[node][i]=0;
			}
		if(left>r or l>right)
			return ;
		if(left>=l and r>=right){
			for(int i=0;i<9;i++){
				ret[i]+=tree[node][i];
			}
			return ;
		}
		int mid=(left+right)/2;
		sum(2*node,l,r,left,mid);
		sum(2*node+1,l,r,mid+1,right);
	}
};
typedef struct SegTreeLazy seg;
int N,Q;
seg T;
int main(){
	cin >> N >> Q;
	for(int i=0;i<N;i++)
		T.arr[i][1]=1;
	T.build(1,0,N-1);
	while(Q--){
		cin >> T.L >> T.R;
		memset(T.ret,0,sizeof T.ret);
		T.sum(1,T.L,T.R,0,N-1);
		pair<int,int> ana={-1,-1};
		for(int i=9;i>=0;i--)
			if(ana.first<ret[i])
				ana={ret[i],i};
		vector<int> V(T.R-T.L+1,ana.first);
		T.update(1,0,N-1,T.L,T.R,V);
	}

}
